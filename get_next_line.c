/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:17:01 by ccastill          #+#    #+#             */
/*   Updated: 2019/12/05 23:17:01 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


static int	ft_comp_new_line(char **s, char **line)
{
	int		l;
	char	*tmp;

	l = 0;
	while ((*s)[l] != '\n' && (*s)[l] != '\0')
		l++;
	if ((*s)[l] == '\n')
	{
		*line = ft_substr(*s, 0, l);
		tmp = ft_strdup(&(*s)[l + 1]);
		free(*s);
		*s = tmp;
	}
	else if ((*s)[l] == '\0')
	{
		*line = ft_strdup(*s);
		ft_bzero(*s, 1);
		return (0);
	}
	return (1);
}

static int	ft_comp(int bwr, int fd, char **s, char **line)
{
	if (bwr < 0)
		return (-1);
	else if (bwr == 0 && s[fd] == NULL)
	{
		free(*s);
		return (0);
	}
	else
		return (ft_comp_new_line(&s[fd], line));
}

int			get_next_line(int fd, char **line)
{
	char		buff[BUFFER_SIZE + 1];
	static char *s[4096];
	char		*tmp;
	int			bwr;

	if (fd < 0 || line == 0)
		return (-1);
	while ((bwr = read(fd, buff, BUFFER_SIZE)) != '\0')
	{
		buff[bwr] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strdup(buff);
		else
		{
			tmp = ft_strjoin(s[fd], buff);
			free(s[fd]);
			s[fd] = tmp;
		}
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	return (ft_comp(bwr, fd, s, line));
}

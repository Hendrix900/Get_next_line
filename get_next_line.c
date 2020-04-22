/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:17:01 by ccastill          #+#    #+#             */
/*   Updated: 2020/04/21 19:17:29 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(int fd, char **line)
{
	static char *s[4096];
	int	bwr;
	char *buff;
	
	buff = malloc(sizeof(char) * BUFFER_SIZE);
	
	bwr = read(fd, buff, BUFFER_SIZE);

	s[fd] = buff;
	*line = s[fd];
	
	printf("Los bytes leidos son %d y la cadena contiene:\n", bwr);

	return(0);
}
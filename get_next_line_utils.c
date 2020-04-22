/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:16:57 by ccastill          #+#    #+#             */
/*   Updated: 2020/04/22 03:42:39 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(const char *str)
{
	int count;
	
	count = 0;
	while (str[count] != '\0')
	{
		count++;	
	}
return (count);	
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *new;
    size_t  count;
    
    count = 0;
    if (!s)
        return (NULL);
    new = ((char*)malloc(sizeof(char) * len + 1));
    if (new == 0)
        return(NULL);
    if (start > ft_strlen(s))
    {
        new[count] == '\0';
        return (new);
    }
    while (count < len)
        new[count++] = s[start++];
    new[count] == '\0';
    return (new); 
}


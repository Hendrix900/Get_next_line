/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:16:57 by ccastill          #+#    #+#             */
/*   Updated: 2020/04/22 02:13:03 by carlos           ###   ########.fr       */
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
    char            *substr;
    size_t            q;

    if (s == 0)
        return (NULL);
    substr = (char*)malloc(len + 1);
    if (substr == 0)
        return (NULL);
    q = 0;
    if (start > ft_strlen(s))
    {
        substr[q] = '\0';
        return (substr);
    }
    while (q < len)
        substr[q++] = s[start++];
    substr[q] = '\0';
    return (substr);
}
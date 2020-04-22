/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:17:04 by ccastill          #+#    #+#             */
/*   Updated: 2020/04/22 02:13:33 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 69
# endif
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> // Eliminar!!!


int     get_next_line(int fd, char **line);
size_t  ft_strlen(const char *str);
char    *ft_substr(char const *s, unsigned int start, size_t len);


#endif

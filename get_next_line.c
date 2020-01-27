/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 23:17:01 by ccastill          #+#    #+#             */
/*   Updated: 2020/01/27 15:47:54 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int			get_next_line(int fd, char **line)
{
	char		*buff; // Creamos una cadena char para almacenar el tamaño de memoria necesario.
	static char *s[4096]; // Creamos una cadena estática que permita manejar el contenido del fd a lo alrgo de las funciones.
	char		*tmp; // Cadena temporal donde almacenaremos 
	int			bwr; // Una variable de tipo entero para allmacenar los bytes que han sido leidos.

	if (!(buff = malloc(sizeof(char) * (BUFFER_SIZE + 1))) // Se reserva la  memoria necesaria en buff del tamaño del BUFFER_SIZE que pasan en los flags.
		|| fd < 0 || line == 0)
		return (-1); // En caso de que no se pase un fd o un line menor que cero o cero, la función devolverá -1 indicando un error.
		
	while ((bwr = read(fd, buff, BUFFER_SIZE)) > 0) // Mientras que el bwr sea mayor que 0 entra. Lee el fd, lo almacena en el array (buff), leerá porciones del tamaño inicado por BUFFER_SIZE.
	{
		buff[bwr] = '\0'; // Añadimos el NULL.
		if (s[fd] == NULL) // Si el fd es NULL, 
			s[fd] = ft_strdup(buff); // Duplicamos buff y lo introducimos en s.
		else
		{
			tmp = ft_strjoin(s[fd], buff); // En la cadena tmp introducimos la combinación del contenido de fd y del buff.
			free(s[fd]); // Liberamos s
			s[fd] = tmp; // Introducimos en s el contenido de tmp.
		}
		if (ft_strchr(s[fd], '\n')) // Si encuentra un salto de línea en s, break.
			break ;
	}

	free(buff); //Se libera el buff
	buff = NULL; // Se iguala a NULL
	return (ft_compare(bwr, fd, s, line));


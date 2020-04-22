/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:26:54 by ccastill          #+#    #+#             */
/*   Updated: 2020/04/21 17:23:35 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int	main()
{
	char *a;
	int fd;
	int b;

	fd = open("iliada.txt", O_RDONLY);
	printf("El fd es: %d\n", fd);
	b = get_next_line(fd, &a);
	printf("%s %d\n", a, b);
	printf("El fd es: %d\n", fd); // Copia para probar el fd
	b = get_next_line(fd, &a); // COpia para probar el fd
	printf("%s %d\n", a, b);
	
}
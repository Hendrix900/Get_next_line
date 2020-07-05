/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:26:54 by ccastill          #+#    #+#             */
/*   Updated: 2020/07/05 18:29:17 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>


int	main()
{
	char *a;
	int fd;
	int b;
//	char *d; //BONUS
//	int fd1; //BONUS
//	int c; //BONUS

	fd = open("iliada.txt", O_RDONLY);
//	fd1 = open("odisea.txt", O_RDONLY); //BONUS
	
	b = get_next_line(fd, &a);
	//c = get_next_line(fd1, &d); //BONUS
	printf("%s %d\n", a, b);
	//printf("%s %d\n", d, c); // BONUS
	while (b != 0)
	{
		b = get_next_line(fd, &a);
		printf("%s %d\n", a, b);
	}
	//c = get_next_line(fd1, &d); // BONUS
	//printf("%s %d\n", d, c); // BONUS


//	printf("El fd es: %d\n", fd); // Copia para probar el fd
//	b = get_next_line(fd, &a); // COpia para probar el fd
//	printf("%s %d\n", a, b);
	
}
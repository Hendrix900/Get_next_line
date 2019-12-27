/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:26:54 by ccastill          #+#    #+#             */
/*   Updated: 2019/12/10 09:26:54 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main()
{
	char *a;
	int fd;
	//int fda;
	int b;


	//fda = open(argv[1], O_RDONLY);
	//b = get_next_line(fda, &a);
	fd = open("iliada.txt", O_RDONLY);
	b = get_next_line(fd, &a);
	printf("%s %d\n", a, b);
	

	/*b = get_next_line(fd, &a);
	printf("%s %d\n", a, b);
	b = get_next_line(fd, &a);
	printf("%s %d\n", a, b);
	b = get_next_line(fd, &a);
	printf("%s %d\n", a, b);
	b = get_next_line(fd, &a);
	printf("%s %d\n", a, b);
*/

	return (0);
}
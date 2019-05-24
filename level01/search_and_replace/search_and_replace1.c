/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:54:37 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/24 10:10:35 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int 	main(int argc, char **argv);
short	ft_strlen(char *string);
int 	main (int argc, char **argv)
{
	short i;

	i = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (ft_strlen(argv[2]) != 1 || (ft_strlen(argv[3]) != 1))
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
			argv[1][i] = argv[3][0];
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

short 	ft_strlen(char *string)
{
	short i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 12:03:10 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/26 12:35:54 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*Not graded by moulinet*/
int main (int argc, char **argv)
{
	int i;
	int repeat;

	repeat = 0;
	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			repeat = argv[1][i] - 96;
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			repeat = argv[1][i] - 64;
		else
			repeat = 1;
		while (repeat)
		{
			write(1, &argv[1][i], 1);
			repeat--;
		}
		i++;
	}
	write(1, "\n", 1);
	return(0);
}

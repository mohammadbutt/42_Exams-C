/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 11:47:49 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/26 11:56:58 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	while (argv[i])
		i++;
	i--;
	while(argv[i][j])
	{
		write(1, &argv[i][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return(0);
}

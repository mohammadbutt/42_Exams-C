/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:50:42 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/23 19:31:51 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv);
int ft_strlen(char *string);
int main (int argc, char **argv)
{
	int i;

	i = 0;
	
	if(argc != 4)
	{
		write(1, "\n", 1);
		return(0);
	}
	while(argv[1][i])
	{
		if(ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
		{
			write(1, "\n", 1);
			return(0);
		}
		if(argv[1][i] == argv[2][0])
			write(1, &argv[3][0], 1);
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}

int ft_strlen(char *string)
{
	int i;

	i = 0;

	while(string[i])
		i++;
	return(i);
}

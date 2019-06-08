/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 12:45:22 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/02 13:36:01 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str == NULL)
		return(0);
	while(str[i])
		i++;
	return(i);
}

void search_and_replace(char *str, char *c1, char *c2)
{
	int i;

	i = 0;
	if(ft_strlen(c1) != 1 || ft_strlen(c2) != 1)
	{
		write(1, "\n", 1);
		return ;
	}
	while(str[i])
	{
		if(str[i] == c1[0])
			str[i] = c2[0];
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main (int argc, char **argv)
{
	if(argc != 4)
	{
		write(1, "\n", 1);
		return(0);
	}
	search_and_replace(argv[1], argv[2], argv[3]);
	return(0);
}

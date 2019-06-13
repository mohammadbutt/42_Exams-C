/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 18:20:40 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/02 18:28:19 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h>

void rev_print(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	i--;
	while(str[i])
		write(1, &str[i--], 1);
	write(1, "\n", 1);
}

int main (int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	rev_print(argv[1]);
}

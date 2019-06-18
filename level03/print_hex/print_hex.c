/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 19:32:22 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/17 20:07:22 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while(str[i])
		nb = 10 * nb + (str[i++] - '0');
	return(nb);
}

void print_hex(int num)
{
	int i;
	char placeholder[] = "0123456789abcdef";

	i = 0;
	if(num >= 16)
		print_hex(num / 16);
	num = num % 16;
	write(1, &placeholder[num], 1);
}

int main(int argc, char **argv)
{
	int num;

	num = 0;
	if(argc == 2)
	{
		num = ft_atoi(argv[1]);
		print_hex(num);
	}
	write(1, "\n", 1);
}

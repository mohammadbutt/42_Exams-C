/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 19:39:52 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/31 20:38:22 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Both methods pass examshell*/

#include <unistd.h>/*write(2)*/
#include <stdio.h> /*printf(3)*/

unsigned char	swap_bits(unsigned char octet)
{
//	return((octet >> 4) | (octet << 4));
	return((octet / 16 ) + (octet * 16));
}
/*
void print_bits(int nb)
{
	if(nb >= 2)
		print_bits(nb/2);
	nb = nb % 2 + '0';
	write(1, &nb, 1);
}

int main(void)
{
	int i;

	i = 0;
	printf("Adds 16 to each number upto 255, takes the remiander to start at 0 gain\n");
	while(i <= 40)
	{
		printf("swap_bits:|%d|%d|\n",i ,swap_bits(i));
		i++;
	}

	write(1,"\n", 1);
//	print_bits(1);
	write(1,"\n", 1);
	print_bits(1);
	write(1, "\n", 1);
	print_bits(swap_bits(1));
	printf("\n%d\n", swap_bits(254));

	return(0);
}
*/

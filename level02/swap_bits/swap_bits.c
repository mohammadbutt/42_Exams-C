/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 13:39:55 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/02 14:00:08 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h> /*write(2)*/

unsigned char swap_bits(unsigned char octet)
{
	return((octet >> 4) | (octet << 4));
}

/*
** Below is print_bits and main that test if bits were swapped successfully
*/

/*
void print_bits(int num)
{
	int i;

	i = 128;
	while(i)
	{
		if(i > num)
			write(1, "0", 1);
		else if(i <= num)
		{
			write(1, "1", 1);
			num = num - i;
		}
		i = i / 2;
	}
}
int main (void)
{
	unsigned char c;

	c = 65;
	print_bits(c);
	write(1, "\n", 1);
	print_bits(swap_bits(c));

	return(0);
}
*/

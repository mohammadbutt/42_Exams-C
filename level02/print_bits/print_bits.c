/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:51:42 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/13 14:05:00 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h> /*write(2)*/

void print_bits(unsigned char octet)
{
	int i;

	i = 128;
	while(i)
	{
		if(i > octet)
			write(1, "0", 1);
		else if(octet >= i)
		{
			write(1, "1", 1);
			octet = octet - i;
		}
		i = i / 2;
	}
}

/*
int main(void)
{
	unsigned char octet1;
	unsigned char octet2;

	octet1 = 2;
	octet2 = 42;

	print_bits(octet1);
	write(1, "\n", 1);
	print_bits(octet2);
}
*/

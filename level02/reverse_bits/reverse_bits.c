/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 12:53:44 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/31 13:07:53 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char byte_len;
	unsigned char reverse;

	byte_len = 8;
	reverse = 0;
	while(byte_len)
	{
		reverse = (reverse << 1) | (octet & 1);
		octet = octet >> 1;
		byte_len--;
	}
	return(reverse);
}

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
	int number;

	number = 65;

	print_bits(number);
	write(1, "\n", 1);
	print_bits(reverse_bits(number));
	return (0);
}
*/

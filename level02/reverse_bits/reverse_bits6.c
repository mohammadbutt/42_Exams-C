/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits6.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:57:18 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/28 17:53:55 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet)
{
	int i;

	i = 128;
	while(i)
	{
		if(octet >= i)
		{
			write(1, "1", 1);
			octet = octet - i;
		}
		else if(octet < i)
			write(1, "0", 1);
		i = i / 2;
	}
}

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char byte_len;
	unsigned char  r;

	byte_len = 8;
	r = 0;
	while(byte_len)
	{
		r = (r << 1) | (octet & 1);
		octet = octet >> 1;
		byte_len--;
	}
	return(r);
}

int main(void)
{
	unsigned char i;
	
	i = 13;

	write(1, "\n\n", 2);
	while(i <= 13)
	{
		print_bits(i);
		write(1, "\n\n", 2);
		print_bits(reverse_bits(i));
		write(1, "\n\n", 2);
		i++;
	}
}

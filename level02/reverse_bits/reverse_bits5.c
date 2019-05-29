/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits5.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:51:08 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/28 16:57:02 by mbutt            ###   ########.fr       */
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
	unsigned char r;

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
	int i;

	i = 0;

	while(i <= 20)
	{
		print_bits(i);
		write(1, "\n", 1);
		print_bits(reverse_bits(i));
		write(1, "\n\n", 2);
		i++;
	}
}

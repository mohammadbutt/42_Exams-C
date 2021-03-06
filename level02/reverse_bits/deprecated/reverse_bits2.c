/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:21:52 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/28 16:33:46 by mbutt            ###   ########.fr       */
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
		else if (octet < i)
			write(1, "0", 1);
		i = i / 2;
	}
}

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char bytes_len;
	unsigned char r;

	bytes_len = 8;
	r = 0;
	while(bytes_len)
	{
		r = (r << 1) | (octet & 1);
		octet = octet >> 1;
		bytes_len--;
	}
	return(r);
}

int main (void)
{
	int i;
	char c;

	i = 0;
	c = '.';
	while(i <= 9)
	{
		print_bits(i);
		write(1, "\n",1);
		print_bits(reverse_bits(i));
		write(1, "\n\n", 2);
		i++;
	}
	print_bits(reverse_bits(c));
}

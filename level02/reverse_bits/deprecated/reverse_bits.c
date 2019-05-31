/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:30:08 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/28 16:01:09 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void 	print_bits(unsigned char octet)
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
void print_bits2(unsigned char octet)
{
	int bits;

	bits = 0;
	if (octet >= 2)
		print_bits2(octet/2);
	bits = octet%2 + '0';
	write(1, &bits, 1);
}
unsigned char reverse_bits(unsigned char octet)
{
	unsigned char bytes_len;
	unsigned char r;

	bytes_len = 8;
	r = 0;

	print_bits(octet);
	write(1, "\n\n", 2);
	while(bytes_len)
	{
//		r = (r << 1) + (octet & 1);
		r = (r * 2) + (octet %2);
//		print_bits(octet);
//		write(1, "\n", 1);
//		print_bits(r);
//		write(1, "\n\n", 2);
//		octet = (octet  >> 1);
		octet = (octet / 2);
		bytes_len--;
	}
//	write(1,"\n\n", 1);
//	print_bits(r);
//	write(1, "\n", 1);
	return(r);
}

int main (void)
{
	char c;

	c = '.';
	print_bits(c);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	print_bits(c);
}

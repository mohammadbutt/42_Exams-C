/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:01:47 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/28 16:21:43 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	print_bits(unsigned char octet)
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
		else if (octet < i )
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
		r = (r << 1) | (octet &1);
		octet = octet >> 1;
		byte_len--;
	}
	return(r);
}
int main (void)
{
	int i;
	char c;

	i = 0;
	c = '.';
	while(i <= 15)
	{
		print_bits(i);
		write(1, "\n", 1);
		i++;
	}
	printf("%c", reverse_bits(c));
	print_bits(reverse_bits(7));
	return(0);
}

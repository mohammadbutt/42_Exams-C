/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 15:23:05 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/28 14:23:41 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// dont do it recursively
// do it using while loop
void ones_and_zeros(unsigned char octet)
{
	if(octet >= 2)
		ones_and_zeros(octet/2);
	octet = octet%2 + '0';
	write(1, &octet, 1);
}

void leading_zeros(unsigned char octet)
{
	int unsigned_char_limit;
	int count;
	
	count = 8;
	unsigned_char_limit = 127;
	while(count)
	{
		if(unsigned_char_limit%2 == 1 && unsigned_char_limit >= octet)
			write(1, "0", 1);
		unsigned_char_limit = unsigned_char_limit / 2;
		count--;
	}
}

void print_bits(unsigned char octet)
{
	leading_zeros(octet);
	ones_and_zeros(octet);
}

void print_bits2(unsigned char octet)
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
//		else if ((octet / i) == 0)
		else if(octet < i)
			write(1, "0", 1);
		i = i/2;
	}
}

void print_bits3(unsigned char octet)
{
	int i;

	i = 256;
	while(i >>= 1)
	{
		if(octet & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}
int main (void)
{
	unsigned char octet;
	octet = 0;

	while(octet <= 20)
	{
		printf("|%d|\n", octet);
		print_bits(octet);
		write(1,"\n", 1);
		print_bits2(octet);
		write(1, "\n", 1);
		print_bits3(octet);
		write(1, "\n\n", 2);

		octet++;
	}
}

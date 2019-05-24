/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 19:39:52 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/23 20:03:06 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned char	swap_bits(unsigned char octet)
{
	return((octet >> 4) | (octet << 4));
}

/*
int main (void)
{
	printf("Adds 16 to the ascii character");
	printf("%c\n", swap_bits('!'));
	printf("%c\n", swap_bits('A'));
	printf("%c\n", swap_bits('B'));
	printf("%c\n", swap_bits('C'));
	printf("%c\n", swap_bits('D'));
	printf("%c\n", swap_bits('E'));
	printf("%c\n", swap_bits('F'));
	printf("%c\n", swap_bits('G'));

	printf("\n---reversing---\n");
	printf("Subtracts 16 from the ascii value\n");
	printf("%c\n", swap_bits('q'));
	printf("%c\n", swap_bits('r'));
	printf("%c\n", swap_bits('s'));
	printf("%c\n", swap_bits('t'));
	printf("%c\n", swap_bits('u'));
	printf("%c\n", swap_bits('v'));
	printf("%c\n", swap_bits('w'));
	return(0);
}
*/

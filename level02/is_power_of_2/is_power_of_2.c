/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:31:39 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/06 11:36:09 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	if(n == 0)
		return(0);
	while(n >= 2)
	{
		if((n % 2) == 1) /*Footnote 1.0*/
			return(0);
		if((n % 2) == 0) /*Footnote 1.1*/
			n = n/2;
	}
	return(1); /*Footnote 1.2*/
}
/* 
** Footnote 1.0 - If n is odd, modulo 2 will be 1, so we end the program and
** return 0 because an odd number cannot be a power of 2.
** Footnote 1.1 - If n is even, modulo 2 will be 0, so we divide n by 2 and run
** the while loop again while n is greater than and equal to 2.
** Footnote 1.2 - If n makes it this far out of the while loop then n is a power
** of 2 and returns 1.
*/
/*
int main (void)
{
	int num;

	num = 0;
	while(num <= 128)
	{
		printf("%d:|%d|\n", num, is_power_of_2(num));
		num++;
	}
	return(0);
}
*/

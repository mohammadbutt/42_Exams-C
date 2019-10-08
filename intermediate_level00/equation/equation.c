/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:15:38 by exam              #+#    #+#             */
/*   Updated: 2019/10/08 14:41:55 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
 Passes examshell
*/

/*
Thought process:
AB + CA = n

A = 0, B = 2, C = 4:		02 + 40	-> ((10 * 0) + (2)) + ((10 * 4) + (0))
A = 1, B = 1, C = 3:		11 + 31	-> ((10 * 1) + (1)) + ((10 * 3) + (1))
A = 2, B = 0, C = 2:		20 + 22	-> ((10 * 2) + (0)) + ((10 * 2) + (2))
A = 3, B = 9, C = 0:		39 + 03	-> ((10 * 3) + (9)) + ((10 * 0) + (3))
*/

void	equation(int n)
{
	int A = 0;
	int B = 0;
	int C = 0;
	int result_of_AB = 0;
	int result_of_CA = 0;

	while(A <= 9)
	{
		while(B <= 9)
		{
			while(C <= 9)
			{
				result_of_AB = (10 * A) + (B);
				result_of_CA = (10 * C) + (A);
				if(result_of_AB + result_of_CA == n)
					printf("A = %d, B = %d, C = %d\n", A, B, C);
				C++;
			}
			C = 0;
			B++;
		}
		C = 0;
		B = 0;
		A++;
	}
}
/*
int main(void)
{
	equation(111);
}
*/

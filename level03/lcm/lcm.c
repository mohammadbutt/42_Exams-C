/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 20:38:57 by mbutt             #+#    #+#             */
/*   Updated: 2019/04/30 19:14:22 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	int i;
	int lcm;

	i = 1;
	lcm = 0;

	if (a == '\0' || b == '\0')
		return (0);

	while(i)
	{
		lcm = a * i;
		i++;
		if((lcm % b) == 0)
			break ;
	}
	return (lcm);
}

int main (void)
{
	unsigned int num1;
	unsigned int num2;

	num1 = 4;
	num2 = 3;

	printf("%d", lcm(num1, num2));

}


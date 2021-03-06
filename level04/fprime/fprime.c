/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 10:42:01 by mbutt             #+#    #+#             */
/*   Updated: 2019/07/01 10:57:56 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/
/*Examshell will timeout if the function takes too long to solve*/

#include <stdio.h> /*printf(3)*/
#include <stdlib.h> /*atoi(3)*/

void fprime(int num)
{
	int i;

	i = 2;
	while(i < num)
	{
		if(num % i == 0)
		{
			printf("%d*", i);
			num = num / i;
		}
		else
			i++;
	}
	printf("%d", num);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
}

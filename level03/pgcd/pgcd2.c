/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 18:49:59 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/02 19:16:20 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes exmshell*/

#include <stdlib.h> /*atoi(3)*/
#include <stdio.h>  /*printf(3)*/

void pgcd(char *str1, char *str2)
{
	int num1;
	int num2;
	int divisor_x;

	num1 = atoi(str1);
	num2 = atoi(str2);
	divisor_x = 0;

	if(num2 < num1)
		divisor_x = num2;
	else if(num1 <= num2)
		divisor_x = num1;
	while(divisor_x)
	{
		if((num1%divisor_x == 0) && (num2%divisor_x == 0))
		{
			printf("%d\n", divisor_x);
			return ;
		}
		divisor_x--;
	}
}

int main (int argc, char **argv)
{
	if(argc != 3)
	{
		printf("\n");
		return(0);
	}
	pgcd(argv[1], argv[2]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:15:35 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/30 20:11:18 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h> /*for atoi*/
#include<stdio.h>  /*for printf*/
/*Did not submit to mouli, but passed personal tests*/
int fprime(char *str)
{
	int num1;
	int num2;

	num1 = atoi(str);
	num2 = 2;
	while(num1 > num2)
	{
		if(num1 % num2 == 0)
		{
			printf("%d*", num2);
			num1 = num1 / num2;
		}
		else
			num2++;
	}
	printf("%d\n", num1);
	return(0);
}
int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	fprime(argv[1]);
	return(0);
}

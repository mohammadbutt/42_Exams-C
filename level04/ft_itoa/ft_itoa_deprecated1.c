/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:51:34 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/08 14:24:00 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <stdlib.h> /*malloc(3)*/
#include <stdio.h>  /*printf(3)*/

int ft_numlen(int num)
{
	int i;

	i = 0;
	if(num < 0)
		i++;
	while(num)
	{
		num = num / 10;
		i++;
	}
	return(i);
}

char *ft_itoa(int nbr)
{
	int numlen;
	char *str;

	numlen = ft_numlen(nbr);
	str = (char *)malloc(sizeof(char) * (numlen + 1));
	if(nbr == -2147483648)
		return("-2147483648");
	if(nbr == 0)
		return("0");
	if(nbr < 0)
	{
		str[0] = '-';
		nbr = -1 * nbr;
	}
	str[numlen] = '\0';
	numlen--;
	while(nbr)
	{
		str[numlen] = nbr%10 + '0';
		numlen--;
		nbr = nbr/10;
	}
	return(str);
}
/*
int main(void)
{
	int num1 = 0;
	int num2 = -22;
	int num3 = -333;
	int num4 = -4444;
	int num5 = -55555;
	int num6 = -2147483647;
	int num7 = '\0';

	printf("|%s|\n", ft_itoa(num1));
	printf("|%s|\n", ft_itoa(num2));
	printf("|%s|\n", ft_itoa(num3));
	printf("|%s|\n", ft_itoa(num4));
	printf("|%s|\n", ft_itoa(num5));
	printf("|%s|\n", ft_itoa(num6));
	printf("|%s|\n", ft_itoa(num7));
}
*/

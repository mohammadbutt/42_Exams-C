/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:55:30 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/25 15:00:55 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <stdio.h>  /*printf(3)*/
#include <stdlib.h> /*malloc(3)*/

int ft_numlen(int value, int base)
{
	int len;

	len = 0;
	if(base < 2 || base > 16)
		return(0);
	if(base == 10 && value <= 0)
		len++;
	while(value)
	{
		value = value/base;
		len++;
	}
	return(len);
}
int ft_abs(int num)
{
	if(num < 0)
		return(-1 * num);
	return(num);
}
char	*ft_itoa_base(int value, int base)
{
	int numlen;
	char *placeholder = "0123456789ABCDEF";
	char *str;
	numlen = ft_numlen(value, base);
	if(base < 2 || base > 16)
		return(NULL);
	if(value == 0)
		return("0");
	str = (char *)malloc(sizeof(char) * (numlen + 1));
	if(str == NULL)
		return(NULL);
	if(value < 0 && base == 10)
		str[0] = '-';
	str[numlen] = '\0';
	numlen--;
	while(value)
	{
		str[numlen] = placeholder[ft_abs(value%base)];
		value = value/base;
		numlen--;
	}
	return(str);
}
/*
int main(int argc, char **argv)
{
	int value;
	int base;
	char *str;

	if(argc != 3)
	{
		printf("\n");
		return(0);
	}
	value = atoi(argv[1]);
	base = atoi(argv[2]);
	str = ft_itoa_base(value, base);
	printf("|%s|\n", str);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 17:21:24 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/03 19:49:48 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Did not push to examshell. But passes personal tests*/
#include <stdio.h>  /*printf(3)*/
#include <stdlib.h> /*malloc(3)*/

int ft_numlen(int num, int base) //
{
	int i;

	i = 0;
	if(base < 2 || base > 16)
		return(0);
	if(num <= 0 && base == 10)
		i++;
	while(num)
	{
		num = num / base;      //
		i++;
	}
	return(i);
}

int ft_abs(int n)
{
	if(n < 0)
		return(-1 * n);
	return(n);

}
char *ft_itoa_base(int value, int base) //
{
	int len;
	char *str;
	char *placeholder = "0123456789ABCDEF";
	len = ft_numlen(value, base);  //
	if(base < 2 || base > 16) 	//
		return(NULL);			//
	if(value == 0)
		return("0");
	str = (char *)malloc(sizeof(char) * (len +1));
	if(str == NULL)
		return(NULL);
	if(value < 0 && base == 10) //
		str[0] = '-';
	str[len] = '\0';
	len--;
	while(value)
	{
		str[len] = placeholder[ft_abs(value%base)];// + '0';
		value = value/base;  //
		len--;
	}
	
	return(str);
}

int main(int argc, char **argv)
{
	int value;
	int base;
	char *str;
	if(argc != 3)
		return(0);

	value = atoi(argv[1]);
	base = atoi(argv[2]);
	str = ft_itoa_base(value, base);
	printf("%s\n", str);
	return(0);
}

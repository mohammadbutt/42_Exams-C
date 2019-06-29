/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 12:35:37 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/27 13:38:45 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Passed  new examshell tests */
/* New examshell test checks for unsinged values that are not base of 10. */

#include <stdlib.h> /*malloc(3)*/
#include <stdio.h>  /*printf(3) for testing*/

int ft_abs(int num)
{
	if(num < 0)
		num = -num;
	return(num);
}
int ft_numlen(int value, int base)
{
	int i;
	unsigned int u_value;

	i = 0;
	u_value = (unsigned int) value;

	if(value == 0)
		return(0);
	if(value < 0 && base == 10)
		i++;
	while(base == 10 && value)
	{
		value = value/base;
		i++;
	}
	while(base != 10 && u_value)
	{
		u_value = u_value/base;
		i++;
	}
	return(i);
}

char *ft_itoa_base(int value, int base)
{
	int len;
	int unsigned u_value;
	char placeholder[] = "0123456789ABCDEF";
	char *str;

	if(value == 0)
		return("0");
	if(base < 2 || base > 16)
		return(NULL);
	len = ft_numlen(value, base);
	u_value = (unsigned int) value;
	str = malloc(sizeof(char) * (len + 1));	
	if(value < 0 && base == 10)
		str[0] = '-';
	str[len] = '\0';
	len--;
	while(base == 10 && value)
	{
		str[len] = placeholder[ft_abs(value%base)];
		value = value / base;
		len--;
	}
	while(base != 10 && u_value)
	{
		str[len] = placeholder[u_value%base];
		u_value = u_value / base;
		len--;
	}
	return(str);
}

/*
int main(void)
{
	int value;
	int base;

	value = -2147483647;
	base = 16;
	printf("%s\n", ft_itoa_base(value, base));
	while(value)
	{
		printf("|%s|\n", ft_itoa_base(value, base));
		value = value / base;
	}

}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:42:23 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/24 13:15:09 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <stdio.h>  /*printf(3)*/
#include <stdlib.h> /*malloc(3)*/

int ft_abs(int num)
{
	if(num < 0)
		return(-1 * num);
	return(num);
}

int ft_numlen(int nbr)
{
	int i;

	i = 0;
	if(nbr <= 0)
		i++;
	while(nbr)
	{
		nbr = nbr/10;
		i++;
	}
	return(i);
}

char *ft_itoa(int nbr)
{
	int len;
	char *str;

	len = ft_numlen(nbr);
	str = malloc(sizeof(char) * (len + 1));
	if(nbr == 0)
		return("0");
	if(nbr < 0)
		str[0] = '-';
	str[len] = '\0';
	len--;
	while(nbr)
	{
		str[len] = ft_abs(nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return(str);
}
/*
int main(void)
{
	printf("|%s|\n", ft_itoa(0));
	printf("|%s|\n", ft_itoa(2));
	printf("|%s|\n", ft_itoa(21));
	printf("|%s|\n", ft_itoa(214));
	printf("|%s|\n", ft_itoa(2147));
	printf("|%s|\n", ft_itoa(21474));
	printf("|%s|\n", ft_itoa(214748));
	printf("|%s|\n", ft_itoa(2147483));
	printf("|%s|\n", ft_itoa(21474836));
	printf("|%s|\n", ft_itoa(214748364));
	printf("|%s|\n", ft_itoa(2147483647));
	printf("|%s|\n", ft_itoa(-2147483648));
	printf("|%s|\n", ft_itoa(-214748364));
	printf("|%s|\n", ft_itoa(-21474836));
	printf("|%s|\n", ft_itoa(-2147483));
	printf("|%s|\n", ft_itoa(-214748));
	printf("|%s|\n", ft_itoa(-21474));
	printf("|%s|\n", ft_itoa(-2147));
	printf("|%s|\n", ft_itoa(-214));
	printf("|%s|\n", ft_itoa(-21));
	printf("|%s|\n", ft_itoa(-2));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:23:11 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/03 15:38:40 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Did not tun it in examshell. But passed personal tests*/

#include <stdio.h>  /*printf(3)*/
#include <stdlib.h> /*free(3)*/

int ft_numlen(num)
{
	int i;

	i = 0;
	if(num <= 0)
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
	int len;
	int sign;
	char *str;

	len = ft_numlen(nbr);
	sign = 1;
	str = (char *)malloc(sizeof(char) * (len +1));
	str[len] = '\0';
	len--;
	if(nbr == 0)
		return("0");
	if(nbr < 0)
	{
		sign = -1;
		nbr = -1 * nbr;
		str[0] = '-';
	}
	while(nbr)
	{
		str[len] = nbr%10 + '0';
		nbr = nbr / 10;
		len--;
	}
	return(str);
}
/*
int main (void)
{
	int num = -4578;

	printf("%s\n", ft_itoa(num));
	return(0);
}
*/

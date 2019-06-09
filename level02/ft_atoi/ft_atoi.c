/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 13:26:20 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/09 13:49:39 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

//#include <stdlib.h> /*atoi(3)*/
//#include <stdio.h>  /*printf(3)*/

int ft_isspace(int c)
{
	if(c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return(1);
	return(0);
}

int ft_atoi(const char *str)
{
	int nb;
	int i;
	int sign;

	nb = 0;
	i = 0;
	sign = 1;
	while(ft_isspace(str[i]) == 1)
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
		nb = (10 * nb) + (str[i++] - '0');
	return(nb * sign);
}
/*
int main (void)
{
	char *num1 = " \t\t+0";
	char *num2 = " \t\t+0";
	char *num3 = "  \n\n+2147483647";
	char *num4 = "  \n\n+2147483647";
	char *num5 = "  \n\n-2147483648";
	char *num6 = "  \n\n-2147483648";

	printf("%d\n", atoi(num1));
	printf("%d\n\n", ft_atoi(num2));
	printf("%d\n", atoi(num3));
	printf("%d\n\n", ft_atoi(num4));
	printf("%d\n", atoi(num5));
	printf("%d\n\n", ft_atoi(num6));

	return(0);
}
*/

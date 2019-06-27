/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 13:06:10 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/27 12:24:33 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Did not submit to examshell*/
#include <stdio.h> /*printf(3) for testing*/

int ft_space(char c)
{
	if(c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return(1);
	return(0);
}

int ft_base(char c, int base)
{
	int i;
	char base_lower[] = "0123456789abcdef";
	char base_upper[] = "0123456789ABCDEF";
	i = 0;
	while(i < base)
	{
		if(base_lower[i] == c || base_upper[i] == c)
			return(i);
		i++;
	}
	return(-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int nb;
	int i;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	if(str_base < 2 || str_base > 16)
		return(0);
	while(ft_space(str[i]) == 1)
		i++;
	if(str[i] == '-' || str[i] == '+')
		if(str[i++] == '-')
			sign = -1;
	while(ft_base(str[i], str_base) != -1)
		nb = (nb * str_base) + (ft_base(str[i++], str_base));
	return(nb * sign);
}
/*
int main(void)
{
	printf("|%d|\n", ft_atoi_base("101010", 2));
	printf("|%d|\n", ft_atoi_base("7fffffff", 16));
	printf("|%d|\n", ft_atoi_base("-7FFffFFF", 16));
	printf("|%d|\n", ft_atoi_base("80000000", 16));
}
*/

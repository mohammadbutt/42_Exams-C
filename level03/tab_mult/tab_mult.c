/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 11:36:30 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/10 12:17:43 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h>
#include <stdlib.h> /*atoi(3)*/

int ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + (str[i++] - '0');
	return(nb * sign);
}

void ft_putnbr(int num)
{
	if(num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if(num < 0)
	{
		num = -1 * num;
		write(1, "-", 1);
	}
	if(num >= 10)
		ft_putnbr(num/10);
	num = num % 10 + '0';
	write(1, &num, 1);
}

void tab_mult(char *str)
{
	int num;
	int i;
	int result;

	num = ft_atoi(str);
	i = 1;
	while(i <= 9)
	{
		result = i * num;
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(num);
		write(1, " = ", 3);
		ft_putnbr(result);
		write(1, "\n", 1);
		i++;
	}
}
int main(int argc, char **argv)
{
	if(argc < 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	tab_mult(argv[1]);
}

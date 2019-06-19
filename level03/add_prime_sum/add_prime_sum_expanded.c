/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:35:03 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/07 12:04:02 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h> /*write(3)*/
//#include <stdlib.h> /*atoi(3)*/
//#include <stdio.h>  /*printf(3)*/

int is_it_prime(int num)
{
	int i;

	i = 2;
	while(i < num)
	{
		if((num%i) == 0)
			return(0);
		i++;
	}
	return(1);
}

int ft_atoi(char *str)
{
	int nb;
	int i;
	int sign;

	nb = 0;
	i = 0;
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
		write(1, "-", 1);
		num = num * - 1;
	}
	if(num >= 10)
		ft_putnbr(num/10);
	num = num%10 + '0';
	write(1, &num, 1);
}

int add_prime_sum(int num)
{
	int total;

	total = 0;
	while(num >= 2)
	{
		if(is_it_prime(num) == 1)
			total = total+ num;
		num--;
	}
	return(total);
}

int main(int argc, char **argv)
{
	int num;
	int prime_sum;

	if(argc != 2)
	{
		write(1, "0\n", 2);
		return(0);
	}
	num = ft_atoi(argv[1]);
	prime_sum = add_prime_sum(num);
	ft_putnbr(prime_sum);
	write(1, "\n", 1);
	return(0);
}

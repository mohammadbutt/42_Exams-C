/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 19:59:01 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/01 20:40:35 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int is_it_prime(int number)
{
	int i;

	i = 2;
	while(i < number)
	{
		if(number % i  == 0)
			return(0);
		i++;
	}
	return(1);
}
int ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;

	if(str[i] == '-')
	{
		i++;
		sign = - 1;
	}
	while(str[i])
	{
		nb = 10 * nb + (str[i] - '0');
		i++;
	}
	return(nb * sign);
}
void ft_putnbr(int num)
{
	int sign;

	sign = 1;

	if(num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if(num < 0)
	{
		write(1, "-", 1);
		num = -1 * num;
		sign = -1;
	}
	if(num >= 10)
		ft_putnbr(num/10);
	num = num%10 + '0';
	write(1, &num, 1);
}

void add_prime_sum(int num)
{
	int i;
	int total;

	i = 2;
	total = 0;
	if(num < 0)
	{
		write(1, "0\n", 2);
		return ;
	}
	while(i <= num)
	{
		if(is_it_prime(i) == 1)
			total = i + total;
		i++;
	}
	ft_putnbr(total);
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	int number;
	if(argc != 2)
	{
		write(1, "0\n", 2);
		return(0);
	}
	number = ft_atoi(argv[1]);
	add_prime_sum(number);
	return(0);
}

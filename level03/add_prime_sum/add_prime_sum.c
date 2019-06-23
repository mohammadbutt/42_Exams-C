/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 13:47:51 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/23 14:14:57 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h> /*write(2)*/

int ft_atoi(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while(str[i])
		nb = 10 * nb + (str[i++] - '0');
	return(nb);
}

void ft_putnbr(int num)
{
	if(num >= 10)
		ft_putnbr(num / 10);
	num = num % 10 + '0';
	write(1, &num, 1);
}

int is_it_prime(int num)
{
	int i;

	i = 2;
	while(i < num)
		if(num % i++ == 0)
			return(0);
	return(1);
}

int add_prime_sum(int num)
{
	int i;
	int sum;

	i = 2;
	sum = 0;
	while(i <= num)
	{
		if(is_it_prime(i) == 1)
			sum = sum + i;
		i++;
	}
	return(sum);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

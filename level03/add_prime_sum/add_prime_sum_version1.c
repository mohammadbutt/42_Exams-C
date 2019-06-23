/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:51:15 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/19 12:51:55 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/
/*There's a slighlty different version, that increments i differently in ft_atoi
   and is_it_prime. And add_prime_sum is also done differently
   https://github.com/mohammadbutt/42_Exams-C/blob/master/level03/add_prime_sum/add_prime_sum_expanded.c
*/
#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	if(str[i] == '-' || str[i] == '+')
		if(str[i++] == '-')
			sign = -1;
	while(str[i] >= '0' && str[i] <= '9')
		nb = (10 * nb) + (str[i++] - '0');
	return(nb * sign);
}

void ft_putnbr(int num)
{
	if(num == -2147483648)
	{
		write(1, "-2147483648", 1);
		return ;
	}
	if(num < 0)
	{
		write(1, "-", 1);
		num = -1 * num;
	}
	if(num >= 10)
		ft_putnbr(num/10);
	num = num%10 + '0';
	write(1, &num, 1);
}

int is_it_prime(int num)
{
	int i;

	i = 2;
	while(i < num)
		if(num%i++ == 0)
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
			sum = i + sum;
		i++;
	}
	return(sum);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
	else if(argc != 2)
		write(1, "0", 1);
	write(1, "\n", 1);
}

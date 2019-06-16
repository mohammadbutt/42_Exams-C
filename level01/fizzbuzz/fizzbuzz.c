/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 14:28:54 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/16 14:32:23 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h> /*write(2)*/

void ft_putnbr(int num)
{
	if(num >= 10)
		ft_putnbr(num/10);
	num = num % 10 + '0';
	write(1, &num, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			write(1, &str[i++], 1);
}

void fizz_buzz(int num)
{
	while(num <= 100)
	{
		if((num % 3 == 0) && (num % 5 == 0))
			ft_putstr("fizzbuzz\n");
		else if(num % 3 == 0)
			ft_putstr("fizz\n");
		else if(num % 5 == 0)
			ft_putstr("buzz\n");
		else
		{
			ft_putnbr(num);
			write(1, "\n", 1);
		}
		num++;
	}
}

int main(void)
{
	int num;

	num = 1;
	fizz_buzz(num);
}

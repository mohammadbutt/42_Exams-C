/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 14:03:24 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/02 15:04:59 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h> /* write(3) */

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			ft_putchar(str[i++]);
}
int ft_isspace(int c)
{
	if(c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return(1);
	return(0);
}
int ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;
	while(ft_isspace(str[i]) == 1)
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return(nb * sign);
}

void ft_putnbr(int num)
{
	if(num < 0)
	{
		num = -1 * num;
		ft_putchar('-');
//		write(1, "-", 1);
	}
	if(num >= 10)
		ft_putnbr(num/10);
	ft_putchar(num % 10 + '0');
//	num = num % 10 + '0';
//	write(1, &num, 1);
}

void tab_mult(char *str)
{
	int index;
	int number;
	int result;

	index = 1;
	number = ft_atoi(str);
	result = index * number;
	while(index <= 9)
	{
		result = index * number;
		ft_putnbr(index);
		ft_putstr(" x ");
		ft_putnbr(number);
		ft_putstr(" = ");
		ft_putnbr(result);
		ft_putstr("\n");
		index++;
	}
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		ft_putchar('\n');
		return(0);
	}
	tab_mult(argv[1]);
	return(0);
}

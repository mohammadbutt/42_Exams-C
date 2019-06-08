/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:42:42 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/08 13:28:39 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h> /*write(3)*/

void ft_putstr(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			write(1, &str[i++], 1);
}

/*
** Shorter version of ft_atoi, that only works with positive numbers.
** Will return 0, for negative numbers, and if it encounters a '+' sign.
** Made for this problem only.
*/
int ft_atoi(char *str)
{
	int nb;
	int i;

	nb = 0;
	i = 0;
	while(str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + str[i++] - '0';
	return(nb); 
}

/*
** Shorter version of ft_putnbr, that only works with positive numbers.
*/
void ft_putnbr(int num)
{
	if(num >= 10)
		ft_putnbr(num/10);
	num = num %10 + '0';
	write(1, &num, 1);
}

void tab_mult(char *str)
{
	int index;
	int num;
	int result;

	index = 1;
	num = ft_atoi(str);
	while(index <= 9)
	{
		result = num * index;
		ft_putnbr(index);
		ft_putstr(" x ");
		ft_putnbr(num);
		ft_putstr(" = ");
		ft_putnbr(result);
		ft_putstr("\n");
		index++;
	}
}

int main(int argc, char **argv)
{
	if(argc < 2)
		write(1, "\n", 1);
	if(argc >= 2)
		tab_mult(argv[1]);
}

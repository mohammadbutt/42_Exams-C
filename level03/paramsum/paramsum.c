/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:11:51 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/24 12:39:26 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h> /*write(2)*/

void ft_putnbr(int num)
{
	if(num >= 10)
		ft_putnbr(num / 10);
	num = (num % 10) + '0';
	write(1, &num, 1);
}

int main(int argc, char **argv)
{
	if(argc > 0 && **argv) /*1.0*/
		ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return(0);
}

/*
** 1.0 - if statement
** if(argc > 0 && **argv) is the same as below if statement
** if(argc > 0 && argv[0][0])
*/

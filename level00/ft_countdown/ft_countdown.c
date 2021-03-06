/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 11:35:30 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/29 11:54:12 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h> /*write(2)*/

int ft_isdigit(char c)
{
	return(c >= '0' && c <= '9');
}

void ft_countdown(char c)
{
	while(ft_isdigit(c))
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
}

int main(void)
{
	ft_countdown('9');
}

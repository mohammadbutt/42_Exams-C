/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 08:56:56 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/21 09:04:31 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			write(1, &str[i++], 1);
}
/*
int main(void)
{
	char *null_string = NULL;
	char *test = "This is a test";

	ft_putstr(null_string);
	ft_putstr("\n");
	ft_putstr(test);
	ft_putstr("\n");
	ft_putstr("|Testing this long long string to break the program..ok|");
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 21:07:59 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/05 21:10:33 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			write(1, &str[i++], 1);
}

int main (void)
{
	ft_putstr("Hello World!\n");
}

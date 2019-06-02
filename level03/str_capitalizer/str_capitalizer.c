/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 19:06:54 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/01 19:41:32 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_capital(char *str)
{
	int i;

	i = 0;
	if(str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	write(1, &str[i], 1);
	i++;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z' && str[i-1] != ' ' && str[i])
			str[i] = str[i] + 32;
		else if((str[i-1] == ' ' || str[i-1] == '\t' ) && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main (int argc, char **argv)
{
	int i;

	i = 1;
	if(argc < 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	while(argv[i])
	{
		ft_capital(argv[i]);
		i++;
	}
	return(0);
}

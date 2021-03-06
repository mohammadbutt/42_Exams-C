/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 11:43:03 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/20 12:01:32 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h>

void repeat_alpha(char *str)
{
	int i;
	int repeat;

	i = 0;
	repeat = 1;
	while(str[i])
	{
		(str[i] >= 'a' && str[i] <= 'z') && (repeat = str[i] - 96);
		(str[i] >= 'A' && str[i] <= 'Z') && (repeat = str[i] - 64);
		while(repeat--)
			write(1, &str[i], 1);
		i++;
		repeat = 1;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
}

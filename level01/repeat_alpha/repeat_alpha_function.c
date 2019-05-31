/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 20:34:12 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/30 20:46:02 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char *str)
{
	int i;
	int repeat;

	i = 0;
	repeat = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			repeat = str[i] - 96;
		else if(str[i] >= 'A' && str[i] <= 'Z' )
			repeat = str[i] - 64;
		else
			repeat = 1;
		while(repeat)
		{
			write(1, &str[i], 1);
			repeat--;
		}
		i++;
	}
	write(1, "\n", 1);
}

int main (int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	repeat_alpha(argv[1]);
	return(0);
}

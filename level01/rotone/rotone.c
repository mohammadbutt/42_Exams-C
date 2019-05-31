/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:53:33 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/31 12:07:37 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /* write(3) */
/*Passes examshell*/

void	rotone(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			str[i] = str[i] + 1;
		else if(str[i] == 'z' || str[i] == 'Z')
			str[i] = str[i] - 25;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	rotone(argv[1]);
	return(0);
}

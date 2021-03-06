/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 13:07:26 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/09 13:23:53 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h>

void rot_13(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			str[i] = str[i] + 13;
		else if((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
			str[i] = str[i] - 13;
		write(1, &str[i++], 1);
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
}

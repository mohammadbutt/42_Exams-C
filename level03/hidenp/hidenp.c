/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 13:22:44 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/14 13:41:45 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h>

int hidenp(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str1[i])
	{
		if(str1[i] == str2[j])
			i++;
		if(str2[j] == '\0')
			return(0);
		j++;
	}
	return(1);
}

int main(int argc, char **argv)
{
	if(argc == 3)
	{
		if(hidenp(argv[1], argv[2]) == 1)
			write(1, "1", 1);
		else if (hidenp(argv[1], argv[2]) == 0)
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:00:12 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/31 17:25:06 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*Passes examshell*/
int checkdouble(char *str, char c, int len)
{
	int i;

	i = 0;
	while(i < len)
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

void ft_union(char *str1, char *str2)
{
	int i;
	int j;
	char placeholder[128];

	i = 0;
	j = 0;
	while(str1[i])
	{
		if(checkdouble(str1, str1[i], i) == 1)
			placeholder[j++] = str1[i];
		i++;
	}
	i = 0;
	while(str2[i])
	{
		if(checkdouble(str2, str2[i], i) == 1)
			placeholder[j++] = str2[i];
		i++;
	}
	placeholder[j] = '\0';
	i = 0;
	j = 0;
	while(placeholder[i])
	{
		if(checkdouble(placeholder, placeholder[i], i) == 1)
			write(1, &placeholder[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main (int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(0);
	}
	ft_union(argv[1], argv[2]);
	return(0);
}

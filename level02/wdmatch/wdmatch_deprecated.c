/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 18:23:33 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/05 18:52:35 by mbutt            ###   ########.fr       */
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

void wdmatch(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str1[i])
	{
		if(str1[i] == str2[j])
			i++;	
		if(str2[j] == '\0') /*If we get to the end of string2 before we get*/
			return ;		/*to end of string1, it means string1 had elements*/
		j++;				/*which were not found in string2*/
	}
	ft_putstr(str1);
}
int main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(0);
	}
	wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}

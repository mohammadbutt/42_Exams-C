/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:06:32 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/08 12:35:55 by mbutt            ###   ########.fr       */
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
		if(str2[j] == '\0') /*Footnotes 1.0*/
			return ;
		j++;
	}
	ft_putstr(str1);
}
/*
** Footnotes 1.0 - If we get to the end of string2 before we get to end of
** string1, it means string1 had elements which were not found in string2 and
** we can end the program by calling return. 
*/

int main(int argc, char **argv)
{
	if(argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
}

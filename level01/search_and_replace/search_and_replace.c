/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:45:15 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/08 11:56:40 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h> /*write(3)*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			i++;
	return(i);
}

void search_and_replace(char *str1, char *str2, char *str3)
{
	int i;

	i = 0;
	if(str1 == NULL || (ft_strlen(str2) != 1 && ft_strlen(str3) != 1))
		return ;
	while(str1[i])
	{
		if(str1[i] == str2[0])
			str1[i] = str3[0];
		write(1, &str1[i++], 1);
	}
}

int main(int argc, char **argv)
{
	if(argc == 4)
		search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
}

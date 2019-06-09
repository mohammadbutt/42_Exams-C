/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 13:53:24 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/09 14:55:39 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h> /*write(3)*/

int ft_space(int c)
{
	if(c == ' ' || c == '\t')
		return(1);
	return(0);
}

int ft_wordcount(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i])
	{
		if((ft_space(str[i]) != 1) && ((ft_space(str[i+1]) == 1) || str[i+1] == '\0'))
			count++;
		i++;
	}
	return(count);
}

void expand_str(char *str)
{
	int i;
	int wordcount;

	i = 0;
	wordcount = ft_wordcount(str);
	while(wordcount)
	{
		while(ft_space(str[i]) == 1)
			i++;
		while(str[i] && ft_space(str[i]) != 1)
			write(1, &str[i++], 1);
		if(ft_space(str[i]) == 1 && wordcount > 1)
			write(1, "   ", 3);
		wordcount--;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 14:22:05 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/23 15:16:41 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h> /*write(2)*/
#include <stdlib.h> /*malloc(3)*/

void ft_putstr(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			write(2, &str[i++], 1);
}

int ft_space(char c)
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
	if(str)
	{
		while(str[i])
		{
			if(ft_space(str[i]) == 0)
				if(ft_space(str[i+1]) == 1 || (str[i+1] == '\0'))
					count++;
		i++;
		}
	}
	return(count);
}

char *ft_strsub(char *str, int start, int len)
{
	int i;
	char *sub_string;

	i = 0;
	sub_string = malloc(sizeof(char) * (len + 1));
	if(str == NULL || sub_string == NULL)
		return(NULL);
	while(len)
	{
		sub_string[i++] = str[start++];
		len--;
	}
	sub_string[i] = '\0';
	return(sub_string);
}

char **ft_strsplit(char *str)
{
	int i;
	int j;
	int len;
	int wordcount;
	char **string_of_words;

	i = 0;
	j = 0;
	len = 0;
	wordcount = ft_wordcount(str);
	string_of_words = malloc(sizeof(char *) * (wordcount + 1));
	while(wordcount)
	{
		while(ft_space(str[i]) == 1)
			i++;
		while(str[i] && (ft_space(str[i]) != 1))
		{
			i++;
			len++;
		}
		string_of_words[j] = ft_strsub(str, i - len, len);
		len = 0;
		j++;
		wordcount--;
	}
	string_of_words[j] = NULL;
	return(string_of_words);

}
int main(int argc, char **argv)
{
	int i;
	int wordcount;
	char **words;
	
	i = 1;
	if(argc > 1)
	{
		wordcount = ft_wordcount(argv[1]);
		words = ft_strsplit(argv[1]);
		while(words[i] && wordcount > 1)
		{
			ft_putstr(words[i++]);
			ft_putstr(" ");
		}
		ft_putstr(words[0]);
	}
	write(1, "\n", 1);
}

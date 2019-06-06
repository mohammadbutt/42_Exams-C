/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:48:43 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/06 14:33:29 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <stdlib.h> /*malloc(3)*/
#include <stdio.h>  /*printf(3)*/

int ft_space(char c)
{
	if(c == ' ' || c == '\t' || c == '\n')
		return(1);
	return(0);
}

int ft_wordcount(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if(str == NULL)
		return(count);
	while(str[i])
	{
		if(ft_space(str[i]) == 0 && (ft_space(str[i+1]) == 1 || str[i+1] == '\0'))
			count++;
		i++;
	}
	return(count);
}

char *ft_strsub(char *str, int start, int len)
{
	int i;
	char *word;

	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if(word == NULL || str == NULL)
		return(NULL);
	while(i < len)
		word[i++] = str[start++];
	word[i] = '\0';
	return(word);
}

char **ft_split(char *str)
{
	int i;
	int j;
	int end;
	int wordcount;
	char **word;

	i = 0;
	j = 0;
	end = 0;
	wordcount = ft_wordcount(str);
	word = (char **)malloc(sizeof(char *) * (wordcount + 1));
	while(wordcount)
	{
		while(ft_space(str[i]))
			i++;
		while(str[i] && ft_space(str[i]) == 0)
		{
			i++;
			end++;
		}
		word[j] = ft_strsub(str, i - end, end);
		end = 0;
		j++;
		wordcount--;
	}
	word[j] = NULL;
	return(word);
}
/*
int main(int argc, char **argv)
{
	int i;
	char **word;

	if(argc != 2)
	{
		printf("\n");
		return(0);
	}
	i = 0;
	word = ft_split(argv[1]);
	while(word[i])
		printf("|%s|\n", word[i++]);
}
*/
/*
int main(void)
{
	int i;
	char **word;
	char *str = "\t\nThis is a\t\t\n big \n\n\n string \n\t\n\t test review\t\n";

	i = 0;
	word = ft_split(str);
	while(word[i])
		printf("|%s|\n", word[i++]);
}
*/

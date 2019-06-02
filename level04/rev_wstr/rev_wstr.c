/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 20:44:18 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/01 21:23:34 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/
#include <unistd.h> /*write(2)*/
#include <stdlib.h> /*malloc(3) free(3)*/
#include <stdio.h> /*printf(3)*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str == NULL)
		return(0);
	while(str[i])
		i++;
	return(i);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			write(1, &str[i++], 1);
}
int ft_wordcount(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if(str == NULL)
		return(0);
	while(str[i])
	{
		if( str[i] && str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0'))
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
	if(word == NULL)
		return(NULL);
	while(i < len)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return(word);
}

char **ft_strsplit(char *str)
{
	int i;
	int j;
	int len;
	int wordcount;
	char **word;

	i = 0;
	j = 0;
	len = 0;
	wordcount = ft_wordcount(str);
	word = (char **)malloc(sizeof(char *) * (wordcount+1));
	if(word == NULL)
		return(NULL);
	while(wordcount)
	{
		while(str[i] && str[i] != ' ')
		{
			i++;
			len++;
		}
		word[j] = ft_strsub(str, i-len, len);
		len = 0;
		i++;
		j++;
		wordcount--;
	}
	word[j] = NULL;
	return(word);
}

int main (int argc, char **argv)
{
	int i;
	int wordcount;
	char **word;

	if(argc != 2)
	{
		ft_putstr("\n");
		return(0);
	}
	
	i = 0;
	word = ft_strsplit(argv[1]);
	wordcount = ft_wordcount(argv[1]);
	if(wordcount == 0)
	{
		ft_putstr("\n");
		return(0);
	}
	wordcount--;
	while(wordcount)
	{
		ft_putstr(word[wordcount]);
		ft_putstr(" ");
		free(word[wordcount]);
		wordcount--;
	}
	ft_putstr(word[0]);
	ft_putstr("\n");
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:05:12 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/06 11:05:40 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Failed examshell*/

#include <stdlib.h> /*malloc(3)*/
#include <stdio.h> 	/*printf(3), fopen(3), getline(3)*/
#include <string.h> /*strcat(3)*/

/*
** ft_stn(), function that returns 1 if it detects, whitespaces.
** man isspace(3).
** Returns 0 if it doesnt detect spaces/tabs/newlines.
*/
int ft_stn(char c)
{
//	if(c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c  == ' ')	
	if(c  == '\t' || c == '\n' || c == ' ')		
		return(1);
	return(0);
}

/*
** Function that returns the number of words in a string, delimited by
** spaces/tabs/newlines.
*/
int ft_wordcount(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if(str == NULL)
		return(count);	/*If string is empty, wordcount will return 0.*/
	while(str[i]) 		/* While loop explained below in a simpler way. (2)*/
	{
		if(ft_stn(str[i]) == 0 && (ft_stn(str[i+1]) == 1 || str[i+1] == '\0'))
			count++;
		i++;
	}
	return(count);
}
/*
** (2). Simple way to understand the above while loop is to consider that the
** only delimiter is a single space. Inside the while loop, we write a single
** if statement that looks at 2 things:
** 		1.	Current element, str[i], is not a single space character. 
**		2.	1 element ahead of the current element, str[i+1] is either a space
**			or a null terminated character.
** When the above two conditions are met we do count++. Otherwise, we do i++,
** to move to the next character of the string.
** Below is what the while loop looks like with a single space as a delimiter:
** while(str[i])
** {
** 		if(str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0'))
**			count++;
**		i++;
** }
*/
char *ft_strsub(char *source, int start, int len)
{
	int i;
	char *dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if(dest == NULL)
		return(NULL);
	while(i < len)
		dest[i++] = source[start++];
	dest[i] = '\0';
	return(dest);
}

char **ft_split(char *str)
{
	int i;
	int j;
	int len;
	int word_count;
	char **word;

	i = 0;
	j = 0;
	len = 0;
	word_count = ft_wordcount(str);
	word = (char **)malloc(sizeof(char *) * (word_count + 1));
	if(word == NULL)
		return(NULL);
	while(word_count)
	{
		while(ft_stn(str[i]))
			i++;
		while(str[i] && ft_stn(str[i]) == 0)
//		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		{
			i++;
			len++;
		}
		word[j] = ft_strsub(str, i - len, len);
		len = 0;
		j++;		
//		while(ft_stn(str[i])) /*i++ as long as str[i] is ' ', '\t', or '\n'*/
//			i++;
		word_count--;
	}
	word[j] = NULL;
	return(word);
}
/*
int main(void)
{
	int i;
	int return_value;
	FILE *file_stream;
	char *line;
	size_t buff_size;
	char full_string[1024];
	char **words;

	file_stream = fopen("big_test.trace", "r");
	line = NULL;
	buff_size = 0;
	while((return_value = getline(&line, &buff_size, file_stream)))
	{
		if(return_value > 0)
			strcat(full_string, line);
//			printf("%s", line);
		else
			break;
	}
//	printf("%s", full_string);
	words = ft_split(full_string);
	while(words[i])
		printf("|%s|\n", words[i++]);
	return(0);
}
*/
/*
int main(int argc, char **argv)
{
	int i;
	char **words;
	if(argc != 2)
	{
		printf("\n");
		return(0);
	}
	i = 0;
	words = ft_split(argv[1]);
	while(words[i])
	{
		printf("|%s|\n", words[i]);
		i++;
	}
	return(0);
}
*/
/*
int main (void)
{
	int i;
	char **word;
	char *str = "This test is to \nsee   \n\nDoes \t\t  it work???   Or  NOT ";   
	i = 0;
	word = ft_split(str);
	while(word[i])
		printf("|%s|\n", word[i++]);
	return(0);
}
*/

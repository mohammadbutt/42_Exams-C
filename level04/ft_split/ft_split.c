/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:05:12 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/05 14:35:56 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Failed examshell*/

#include <stdlib.h> /*malloc(3)*/
#include <stdio.h> 	/*printf(3)*/

/*
** ft_stn(), function that returns 1 if it detects, spaces/tabs/newlines.
** Returns 0 if it doesnt detect spaces/tabs/newlines.
*/
int ft_stn(char c)
{
	if(c == ' ' || c == '\t' || c == '\n' || c == '\v')
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
** When the above two conditions are met we do count++. Otherwise, we do count++,
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

int ft_endtrim(char *str)
{
	int b;

	b = 0;
	if(str == NULL)
		return(0);
	while(str[b])
		b++;
	b--;
	while(ft_stn(str[b]) == 1)
		b--;
	b++;
	return(b);
}

char **ft_split(char *str)
{
	int i;
	int j;
	int len;
	int end_trim;
	int word_count;
	char **word;

	i = 0;
	j = 0;
	len = 0;
	end_trim = 0;
	end_trim = ft_endtrim(str);
	word_count = ft_wordcount(str);
	word = (char **)malloc(sizeof(char *) * (word_count + 1));
	if(word == NULL)
		return(NULL);
	while(i < end_trim)
	{
		while(ft_stn(str[i]) == 0)
//		while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		{
			i++;
			len++;
		}
		word[j] = ft_strsub(str, i - len, len);
		len = 0;
		j++;		
		while(ft_stn(str[i])) /*i++ as long as str[i] is ' ', '\t', or '\n'*/
			i++;
	}
	word[j] = NULL;
	return(word);
}

/*
int main (void)
{
	int i;
//	char *str = "This test is to \nsee   \n\nDoes   it work???   Or  NOT ";
	char *str = "\
8bPz	  sobauVg6MBK\
\
ejy594UJns6uo4HG8uZ5Ex76lzLD2g\
	DBm\
  n9beiUqChNra3\
   hwNrJPuoZe ";
//	char *str = "     ";	
	char **word;
   
	i = 0;
	word = ft_split(str);
	while(word[i])
		printf("%s\n", word[i++]);
	return(0);
}
*/

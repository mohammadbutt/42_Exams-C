/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 10:11:55 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/07 10:31:25 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <string.h> /*strdup(3)*/
#include <stdio.h>  /*printf(3)*/
#include <stdlib.h> /*malloc(3)*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			i++;
	return(i);
}

char *ft_strdup(char *src)
{
	int i;
	int len;
	char *dest;

	i = 0;
	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if(dest == NULL)
		return(NULL);
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
/*
int main(void)
{
	char source[] = "This is a test to break this long long string";
	char *dest = "Testing a different test to see does it write on to destination?";
	
	dest = ft_strdup(source);
	printf("|%s|\n", dest);
}
*/

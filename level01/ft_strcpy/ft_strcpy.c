/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:05:37 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/25 15:24:32 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;

	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}
/*
int ft_strlen(char *string);
int main (void)
{
	char *source = "Run this big string and try to break it if null is missing";
	char dest[ft_strlen(source) + 1];

	ft_strcpy(dest, source);
	printf("|%s|\n", dest);
	
	printf("if copy is done properly, return 0:|%d|\n", strcmp(dest, source));

	return(0);
}

int ft_strlen(char *string)
{
	int i;

	i = 0;
	while(string[i])
		i++;
	return(i);
}
*/

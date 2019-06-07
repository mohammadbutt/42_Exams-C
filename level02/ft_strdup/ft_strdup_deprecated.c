/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 19:25:01 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/25 20:11:54 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src);
int ft_strlen(char *string);
char *ft_strdup(char *src)
{
	char *dest;
	int i;
	i = 0;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}
int ft_strlen(char *string)
{
	int i;
	
	i = 0;
	while(string[i])
		i++;
	return(i);
}
/*
int main(void)
{
	char source1[] = "This is a test";
	char *dest;

	dest = ft_strdup(source1);

	printf("%s\n", dest);
	free(dest);
	return(0);
}
*/

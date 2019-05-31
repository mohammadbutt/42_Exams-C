/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 20:50:18 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/30 21:06:03 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> /*for malloc*/
#include <stdio.h>  /*for printf*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(src + 1)));
	if(dest == NULL || src == NULL)
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
int main (void)
{
	char string1[] = "Testing this";
	char *string2;

	string2 = ft_strdup(string1);

	printf("%s\n", string2);
	return(0);
}
*/

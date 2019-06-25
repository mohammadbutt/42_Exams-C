/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 13:15:46 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/23 13:44:56 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <stdio.h>  /*printf(3)*/
#include <string.h> /*strpbrk*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			i++;
	return(i);
}

char *ft_strpbrk(const char *s1, const char *s2 )
{
	int i;
	int j;
	int len;


	i = 0;
	j = 0;
	len = ft_strlen((char *)s1);
	while(len)
	{
		while(s1[i])
		{
			if(s1[i] == s2[j])
				return((char *)s1+i);
			if(s2[j] == '\0')
				break;
			j++;
		}
		j = 0;
		i++;
		len--;
	}
	return(NULL);
}
/*
int main(void)
{
	char *str1 = "abcd";
	char *str2 = "efghmnbvcxz";

	printf("   strpbrk: |%s|\n", strpbrk(str1, str2));
	printf("ft_strpbrk: |%s|\n", strpbrk(str1, str2));
}
*/

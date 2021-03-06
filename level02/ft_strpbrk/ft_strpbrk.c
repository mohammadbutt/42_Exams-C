/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 21:30:28 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/24 21:46:04 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <stdio.h> /*printf(3)*/
#include <string.h> /*strpbrk(3)*/


char *ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	if(s1 == NULL || s2 == NULL)
		return(NULL);
	while(s1[i])
	{
		while(s2[j])
		{
			if(s1[i] == s2[j])
				return((char *)s1+i);
			j++;
		}
		j = 0;
		i++;
	}
	return(NULL);
}
/*
int main(void)
{
	char *str1 = "abcd";
	char *str2 = "efgha";


	printf("   strpbrk:|%s|\n", strpbrk(str1, str2));
	printf("ft_strpbrk:|%s|\n", ft_strpbrk(str1, str2));
}
*/

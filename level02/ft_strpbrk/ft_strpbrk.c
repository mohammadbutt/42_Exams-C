/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 19:20:50 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/16 20:24:18 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <stdio.h>	/*write(2)*/
#include <string.h> /*strpbrk(3)*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			i++;
	return(i);
}


char *ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;
	int s1_len;

	i = 0;
	j = 0;
	s1_len = ft_strlen((char *)s1);
	if(s1 == NULL || s2 == NULL)
		return(NULL);
	while(s1_len)
	{
		while(s2[j])
		{
			if(s1[i] && s1[i] != s2[j])
				j++;
			else if(s1[i] == s2[j])
				return((char *)s1+i);
		}
		j = 0;
		i++;
		s1_len--;
	}
	return(NULL);
}

/*
int main(void)
{
	const char *str1_0 = "asda";
	const char *str1_1 = NULL;

	const char *str2_0 = "asda";
	const char *str2_1 = NULL;

	char *ret1;
	char *ret2;

	ret1 = strpbrk(str1_0, str1_1);
	ret2 = ft_strpbrk(str2_0, str2_1);

	printf("   ret:|%s|\n", ret1);
	printf("ft_ret:|%s|\n\n", ret2);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 13:57:56 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/22 15:10:27 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <stdio.h>  /*printf(3)*/
#include <string.h> /*strspn(3)*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			i++;
	return(i);
}


size_t ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;
	int count;
	int len;

	i = 0;
	j = 0;
	count = 0;
	len = ft_strlen((char *)s);
	while(len)
	{
		while(s[i])
		{
			if(s[i] == accept[j])
			{
				count++;
				i++;
				break;
			}
			if(accept[j] == '\0')
				break;
			j++;
		}
		j = 0;
		len--;
	}
	return(count);
}

/*
int main(void)
{
	char *str1_1 = "fasdfasdasdasd asdfasrwer fdjpoikx;lvkzcxzbvodifsgj 39U8R";
	char *str1_2 = "fasdasdasasfdsavzxcv E98R7WIJEFBAW873AYR AJEHRFH7H2834Y";

	printf("ft_strspn:|%zu|\n", ft_strspn(str1_1, str1_2));
	printf("   strspn:|%lu|\n", strspn(str1_1, str1_2));
}
*/

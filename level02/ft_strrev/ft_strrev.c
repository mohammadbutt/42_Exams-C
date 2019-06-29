/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 12:10:54 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/29 12:41:42 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <stdio.h> /*printf(3) for testing*/

void ft_swap(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			i++;
	return(i);
}

char *ft_strrev(char *str)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(str) - 1;
	while(i < len)
	{
		ft_swap(&str[i], &str[len]);
		i++;
		len--;
	}
	return(str);
}
/*
int main(void)
{
	char str1[] = "zyxwvutsrqponmlkjihgfedcba abcdefghijklmnopqrstuvwxyz";
	char *str2 = NULL;
	char str3[] = "";

	printf("|%s|\n", ft_strrev(str1));
	printf("|%s|\n", ft_strrev(str2));
	printf("|%s|\n", ft_strrev(str3));

}
*/

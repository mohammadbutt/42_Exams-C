/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:37:39 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/30 16:11:51 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
	while(str[i])
		i++;
	return(i);
}

char *ft_strrev(char *str)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(str) -1;

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
	char string[] = "Testing this very long string to break it. Does it work?";

	ft_strrev(string);

	printf("%s\n", string);
	return(0);
}
*/

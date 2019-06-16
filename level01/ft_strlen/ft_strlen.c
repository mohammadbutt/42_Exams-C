/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 18:30:13 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/15 18:39:30 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <stdio.h> /*printf(3)*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			i++;
	return(i);
}

/*
int main(void)
{
	char *str1 = NULL;
	char *str2 = "Test";

	printf("%d\n", ft_strlen(str1));
	printf("%d\n", ft_strlen(str2));
}
*/

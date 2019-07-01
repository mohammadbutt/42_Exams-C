/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 13:59:10 by mbutt             #+#    #+#             */
/*   Updated: 2019/07/01 14:28:45 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Should pass examshell*/

#include <stdio.h> /*printf(3)*/
#include <string.h> /*strcmp(3)*/

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if((s1 == NULL || s2 == NULL) || (s1[i] == '\0' && s1[i] == '\0'))
		return(0);
	while(s1[i] == s2[i])
		i++;
	return(s1[i] - s2[i]);
}


int main(void)
{
	char *str1 = "";
	char *str2 = "";

	printf("ft_strcmp:|%d|\n", ft_strcmp(str1, str2));
	printf("   strcmp:|%d|\n\n", strcmp(str1, str2));
	printf("ft_strcmp:|%d|\n", ft_strcmp(str2, str1));
	printf("   strcmp:|%d|\n\n", strcmp(str2, str1));
	printf("ft_strcmp:|%u|\n", ft_strcmp(str1, str2));
	printf("   strcmp:|%u|\n\n", strcmp(str1, str2));
	printf("ft_strcmp:|%u|\n", ft_strcmp(str2, str1));
	printf("   strcmp:|%u|\n\n", strcmp(str2, str1));
}


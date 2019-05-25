/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:45:44 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/25 16:11:32 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while((s1[i] == s2[i]) && (s1[i]!= '\0' || s2[i] != '\0'))
		i++;
//	return((unsigned char)s1[i] - (unsigned char)s2[i]);
	return(s1[i] - s2[i]);
}

/*
int main (void)
{
	char *string1 = "test1";
	char *string2 = "test1";

	printf("%d\n", ft_strcmp(string1, string2));
	printf("%d\n", strcmp(string1, string2));
}
*/

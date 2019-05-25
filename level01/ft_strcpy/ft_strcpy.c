/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:05:37 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/25 15:43:22 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	
	if(s2 == NULL)
		return(NULL);
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}
/*
int main (void)
{
	char *source1 = "Run this string. Try to break it if null is missing";
	char *source2 = NULL;
	char dest1[] = "one two dfdfd dfdfd dfdfd d fdfd d dfdfd d dfdfdf d fdfd d";
	char dest2[] = "Another test";
	ft_strcpy(dest1, source1);
	printf("|%s|\n", dest1);
	ft_strcpy(dest2, source2);
	printf("|%s|\n", dest2);

	printf("if copy is done properly, return 0:|%d|\n", strcmp(dest1, source1));

	return(0);
}
*/

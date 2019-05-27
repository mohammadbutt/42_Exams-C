/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:22:54 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/27 11:13:08 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>/*for printf*/

char *ft_strcpy(char *dest, char *source)
{
	int i;

	i = 0;
	if(!source)
		return (NULL);
	while (source[i])
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

char *ft_strrev(char *str)
{
	int i;
	int b;
	char temp[ft_strlen(str)];

	i = 0;
	b = 0;
	ft_strcpy(temp, str);
	while(temp[b])
		b++;
	b--;
	while(str[i])
	{
		str[i] = temp[b];
		i++;
		b--;
	}
	return(str);
}

/*
int main (void)
{
	char str[] = "Testing this long string to break it. Does it break or work??";
	printf("%s",ft_strrev(str));
	return(0);
}
*/
/*
** Without ft_strcpy and ft_strlen, which implements swapping characters and
** counting length of string just like ft_swap and ft_strlen, but everything is
** intended to be built into one small function.
*/
/*
char *ft_strrev(char *str)
{
	int i;
	int b;
	char temp;

	i = 0;
	b = 0;
	while (str[b])
		b++;
	b--;
	while(i < b)
	{
		temp = str[i];
		str[i] = str[b];
		str[b] = temp;
		i++;
		b--;
	}
	return(str);
}
*/

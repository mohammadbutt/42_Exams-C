/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 12:55:30 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/16 17:26:46 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Failed examshell because dest is not initialized*/

#include <stdio.h> 	/*printf(3)*/
#include <string.h> /*strspn(3)*/

char	*ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;
	char *dest;

	i = 0;
	j = 0;
	while(s[i])
	{
		if(s[i] == accept[j])
		{
			dest[i] = s[i];
			i++;
		}
		if(accept[j] == '\0' && s[i] == '\0')
		{
			dest[i] = '\0';
			return(dest);
		}
		j++;
	}
	dest[i] = '\0';
	return(dest);
}

/*
size_t ft_strspn(const char *str1, const char *str2)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while(str1[i])
	{
		if(str1[i] == str2[j])
		{
			count++;
			i++;
		}
		if(str2[j] == '\0' && str1[i] == '\0')
			return(count);
		j++;
	}
	return(count);
}
*/
/*
int main(void)
{
	char *string1 = "teteasdasda";
	char *string2 = "his is a teteasdasdasd";
	char *placeholder;

	placeholder = ft_strspn(string1, string2);

	printf("   strspn:|%lu|\n", strspn(string1, string2));
//	printf("ft_strspn:|%s|\n", ft_strspn(string1, string2));
	printf("ft_strspn:|%s|\n", placeholder);
}
*/

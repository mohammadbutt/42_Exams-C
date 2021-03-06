/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 17:48:53 by mbutt             #+#    #+#             */
/*   Updated: 2019/07/01 18:54:23 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <stdio.h> /*printf(3)*/
#include <string.h> /*strcspn(3)*/


size_t ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	if(s == NULL || reject == NULL)
		return(0);
	while(s[i])
	{
		while(reject[j])
		{
			if(s[i] == reject[j])
				return(count);
		j++;
		}
		count++;
		j = 0;
		i++;
	}
	return(count);
}

/*
int main(void)
{
	char *str1 = "a";
	char *str2 = NULL;
	
	printf("ft_strcspn:|%lu|\n", ft_strcspn(str1, str2));
	printf("   strcspn:|%lu|\n", strcspn(str1, str2));

}
*/

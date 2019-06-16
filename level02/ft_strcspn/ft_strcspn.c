/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 12:00:09 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/16 13:21:38 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Should pass examshell*/

#include <stdio.h> 	/*printf(3)*/
#include <string.h> /*strcspn(3)*/

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;
	size_t count;

	i = 0;
	j = 0;
	count = 0;
	while(reject[j])
	{
		while((s[i]) && (s[i] != reject[j]))
		{
			count++;
			i++;
		}
		if(s[i] == reject[j] || (reject[j+1] == '\0'))
			return(count);
		count = 0;
		i = 0;
		j++;
	}
	return(count);
}

/*
int main(void)
{
	char *str1_1 = "abcd";
	char *str1_2 = "efghi";

	char *str2_1 = "abcd";
	char *str2_2 = "efghi";


	printf("ft_strcspn:|%lu|\n", ft_strcspn(str1_1, str1_2));
	printf("   strcspn:|%lu|\n", strcspn(str2_1, str2_2));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:05:20 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/31 17:21:52 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
** Function, checkdouble, compares characters upto [itself-1]. Hence, i < len.
** For exmaple, in string "AABC", 'C' is the 3rd element (i[3]), then the while
** loop will run upto 'B'. If C occurs on 0th, 1st, or 2nd element, i[0], i[1],
** or i[2], then program will return 0 because it detetcted a duplicate value.
** This function drives the whole program.
** If a character is a duplicate then the function returns 0
** If a character is not a duplicate then the function returns 1.
*/

int checkdouble(char *str, char c, int len)
{
	int i;

	i = 0;
	while(i < len)
	{
		if(str[i] == c)
			return(0);
		i++;
	}
	return(1);
}

void ft_union(char *str1, char *str2)
{
	int i;
	int a;
	char placeholder[127];
	/* Since we are only storing uniqeu values, we set buff size to 128 because
	** there are only 127 characters in ascii +1 to be on the safe side.
	*/

	i = 0;
	a = 0;
	while(str1[i])
	{
		if(checkdouble(str1, str1[i], i) == 1)
		{
			placeholder[a] = str1[i];
			a++;
		}
		i++;
	}
	i = 0;
	while(str2[i])
	{
		if(checkdouble(str2, str2[i], i) == 1)
		{
			placeholder[a] = str2[i];
			a++;
		}
		i++;
	}
	placeholder[a] = '\0';
	i = 0;
	while(placeholder[i])
	{
		if(checkdouble(placeholder, placeholder[i], i) == 1)
		{
			write(1, &placeholder[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(0);
	}
	ft_union(argv[1], argv[2]);
	return(0);	
}

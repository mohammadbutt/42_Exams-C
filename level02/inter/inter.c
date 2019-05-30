/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:49:19 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/29 19:12:45 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** This function check if the current character is a duplicate or not upto the
** len number.
** RETURN VALUES: If a character is a duplicate then the function returns 0.
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
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}
void inter(char *str1, char *str2)
{
	int i;
	int j;
	char placeholder[128];
	char placeholder2[128];

	i = 0;
	j = 0;
	/*while loop runs the function checkdouble and stores the unique values in
	  placeholder*/
	while(str1[i])
	{
		if((checkdouble(str1,str1[i],i) == 1))
		{
			placeholder[j] = str1[i];
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	while(str2[i])
	{
		if((checkdouble(str2,str2[i],i) == 1))
		{
			placeholder2[j] = str2[i];
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	while(placeholder[i])
	{
		if(checkdouble(placeholder, placeholder2[j], ft_strlen(placeholder) == 0))
			write(1, &placeholder[i], 1);
		i++;
		j++;
	}
	write(1, "\n", 1);
}

int main (int argc, char **argv)
{
	int i;
	
	i = 0;
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(0);
	}
	inter(argv[1], argv[2]);
	return(0);
}

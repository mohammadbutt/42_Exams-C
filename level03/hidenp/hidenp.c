/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:28:47 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/31 14:47:04 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*Passes examshell*/
int hidenp(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(str1[i] == '\0') /*If first string is empty then the program returns 1*/
		return(1);
	while(str1[i])
	{
		if(str1[i] == str2[j])
			i++;
		if(str2[j] == '\0') /*If str2 reaches '\0' before str1, program returns 0*/
			return(0);
		j++;
	}
	/*If our program made it this far, which means all elements of str1 were
	 *found in str2 and the progran can return 1*/
	return(1);
}

int main (int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	if(hidenp(argv[1], argv[2]) == 0)
		write(1, "0\n", 2);
	else if(hidenp(argv[1], argv[2]) == 1)
		write(1, "1\n", 2);
	return(0);
}

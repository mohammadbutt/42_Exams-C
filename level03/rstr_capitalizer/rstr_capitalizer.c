/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:16:55 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/30 16:50:18 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*Passed mouli test*/
void capital(char *str)
{
	int i;

	i = 0;

	while(str[i])
	{
		if((str[i] >= 'a' && str[i] <= 'z') && (str[i+1] == ' ' ||\
				   	str[i+1] == '\t' || str[i+1] == '\0'))
			str[i] = str[i] - 32;
		else if(str[i] >= 'A' && str[i] <= 'Z' &&(str[i+1]) != ' ' &&\
			   	str[i+1] != '\t' && str[i+1] != '\0')
			str[i] = str[i] + 32;
		write(1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	int i;

	i = 1;
	if(argc < 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	while(i < argc)
	{
		capital(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return(0);
}

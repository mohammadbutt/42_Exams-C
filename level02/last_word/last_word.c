/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 18:31:49 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/02 18:45:13 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h>

void last_word(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	i--;
	while(str[i] == ' ' || str[i] == '\t')
		i--;
	while( str[i] && str[i] != ' ' && str[i] != '\t')
		i--;
	i++;
	while(str[i] && str[i] != ' ' && str[i] != '\t')
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int main (int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	last_word(argv[1]);
}

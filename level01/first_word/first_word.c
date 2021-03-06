/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:51:19 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/14 13:00:50 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h> /*write(2)*/

void first_word(char *str)
{
	int i;

	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i] && (str[i] != ' ' && str[i] != '\t'))
		write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
}

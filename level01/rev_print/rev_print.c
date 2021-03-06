/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:41:52 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/13 13:48:49 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h> /*write(2)*/

void rev_print(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	i--;
	while(str[i])
		write(1, &str[i--], 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
}

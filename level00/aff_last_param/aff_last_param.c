/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 08:44:31 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/21 08:53:02 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h> /*write(2)*/

void aff_last_param(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
	if(argc > 1)
		aff_last_param(argv[argc-1]);
	write(1, "\n", 1);
}

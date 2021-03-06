/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 20:52:16 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/24 21:06:26 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h> /*write(2)*/

int aff_a(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		if(str[i++] == 'a')
			return(write(1, "a\n", 2));
	return(write(1, "\n", 1));
}

int main(int argc, char **argv)
{
	if(argc != 2)
		return(write(1, "a\n", 2));
	else
		aff_a(argv[1]);
}

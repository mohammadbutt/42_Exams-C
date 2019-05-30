/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:45:57 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/30 11:53:25 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void aff_a(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(str[i] == 'a')
		{
			write(1, "a", 1);
			break;
		}
		i++;
	}
	write(1, "\n", 1);
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if(argc != 2)
	{
		write(1, "a\n", 2);
		return(0);
	}
	aff_a(argv[1]);
	return(0);
}

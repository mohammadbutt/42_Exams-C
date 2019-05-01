/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 19:30:17 by mbutt             #+#    #+#             */
/*   Updated: 2019/04/28 20:36:10 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // for write 

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		while(*argv[1])
			argv[1]++;
		argv[1]--;
		while(*argv[1] == ' ' || *argv[1] == '\t')
			argv[1]--;
		while(*argv[1])
		{
			if (*argv[1] == ' ' || *argv[1] == '\t')
				break;
			argv[1]--;
		}
		argv[1]++;
		while(*argv[1])
		{
			if (*argv[1] == ' ' || *argv[1] == '\t')
				break;
			write(1, argv[1]++, 1);
		}
	}
	write(1, "\n", 1);
}

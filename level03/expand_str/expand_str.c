/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 18:33:41 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/28 19:20:58 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i;
	int b;
	int first_space;

	i = 0;
	b = 0;
	first_space = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i] == '\t' || argv[1][i] == ' ')
		i++;
	first_space = i;
	while(argv[1][b])
		b++;
	b--;
	while(argv[1][b] == '\t' || argv[1][b] == ' ')
		b--;
	while(i <= b)
	{
		while ((argv[1][i] == '\t') || (argv[1][i] == ' '))
			i++;
		if((i != first_space) && (argv[1][i-1] == '\t' || argv[1][i-1] == ' '))
			write(1, "   ", 3);
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}

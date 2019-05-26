/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 12:45:44 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/26 13:10:51 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	while(argv[1][i])
	{
		if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			argv[1][i] = 'a' + 'z' - argv[1][i]; /* n = 1+26-n*/
		else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			argv[1][i] = 'A' + 'Z' - argv[1][i];
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}

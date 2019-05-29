/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 15:15:37 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/29 15:25:35 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void last_param(char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i])
		i++;
	i--;
	while(str[i][j])
	{
		write(1, &str[i][j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	last_param(argv);
	return(0);
}

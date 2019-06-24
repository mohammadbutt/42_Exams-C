/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 17:27:45 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/31 17:47:30 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*Passes examshell*/

/*
** This is a modified version of ft_putnbr, which works because we dont have to
** handle negative numbers/arguments
*/
void ft_putnbr(int nb)
{
	if(nb >= 10)
		ft_putnbr(nb / 10);
	nb = nb%10 + '0';
	write(1, &nb, 1);
}
int main (int argc, char **argv)
{
	int i;

	i = 0;
	if(argc < 2)
	{
		ft_putnbr(0);
		write(1, "\n", 1);
		return(0);
	}
	while(argv[i])
		i++;
	i = i - 1; /*we subtract 1 from i because first argument starts at 1, not 0*/
	ft_putnbr(i);
	write(1, "\n", 1);
	return(0);
}

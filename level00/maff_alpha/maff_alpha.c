/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:23:19 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/13 13:40:18 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes examshell*/

#include <unistd.h> /*write(2)*/

void maff_alpha(char lower, char upper)
{
	while((lower >= 'a' && lower <= 'y') && (upper >= 'B' && upper <= 'Z'))
	{
		write(1, &lower, 1);
		write(1, &upper, 1);
		lower = lower + 2;
		upper = upper + 2;
	}
	write(1, "\n", 1);
}

int main(void)
{
	maff_alpha('a', 'B');
}

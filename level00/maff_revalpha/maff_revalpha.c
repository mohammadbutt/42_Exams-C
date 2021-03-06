/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 09:14:02 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/30 09:26:25 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h> /*write(2)*/

int is_lower(char c)
{
	return(c >= 'a' && c <= 'z');
}

int is_upper(char c)
{
	return(c >= 'A' && c <= 'Z');
}

void maff_revalpha(char lower, char upper)
{
	while(is_lower(lower) && is_upper(upper))
	{
		write(1, &lower, 1);
		write(1, &upper, 1);
		lower = lower - 2;
		upper = upper -2;
	}
	write(1, "\n", 1);
}

int main(void)
{
	maff_revalpha('z', 'Y');
}

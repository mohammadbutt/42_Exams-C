/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:30:47 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/24 09:45:25 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char c_lower;
	char c_upper;

	c_lower = 'z';
	c_upper = 'Y';

	while ((c_lower >= 'a' && c_lower <= 'z') || (c_upper >= 'A' && c_upper <= 'Z'))
	{
		write(1, &c_lower, 1);
		write(1, &c_upper, 1);
		c_lower = c_lower - 2;
		c_upper = c_upper - 2;
	}
	write(1, "\n", 1);
	return(0);
}

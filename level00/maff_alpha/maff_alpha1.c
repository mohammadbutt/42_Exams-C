/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 19:02:46 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/25 19:06:43 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	char lower;
	char upper;
	lower = 'a';
	upper = 'B';

	while ((lower >= 'a' && lower <= 'z') || (upper >= 'A' && upper <= 'Z'))
	{
		write(1, &lower, 1);
		write(1, &upper, 1);
		lower = lower + 2;
		upper = upper + 2;
	}
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:54:49 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/24 12:07:18 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	max(int *tab, unsigned int len)
{
	unsigned int i;
	int potential_max;

	i = 0;
	potential_max = -2147483648;

	if(!tab || !len)
		return(0);
	while(i < len)
	{
		if(tab[i] >= potential_max)
			potential_max = tab[i];
		i++;
	}
	return(potential_max);
}
/*
int main(void)
{
	int tab0[] = {-1, -2, -3, -6};
	int tab1[5] = {1, 20, 30, 40, 50};
	int tab2[] = {};
	int len;
	len = 5;

	printf("%d\n", max(tab0, len));
	printf("%d\n", max(tab1, len));
	printf("%d\n", max(tab2, 0));

	return(0);
}
*/

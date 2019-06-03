/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:29:32 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/02 19:54:48 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;

	i = 1;
	while(i < size)
	{
		if(tab[i-1] > tab[i])
		{
			ft_swap(&tab[i], &tab[i-1]);
			i = 0;
		}
		i++;
	}
}
/*
int main (void)
{
	int range[] = {-9, -2, -3, 2, 1, 5, 1, 0, -9, -9, -77};
	int i;

	i = 0;
	sort_int_tab(range, 11);
	while(i < 11)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return(0);
}
*/

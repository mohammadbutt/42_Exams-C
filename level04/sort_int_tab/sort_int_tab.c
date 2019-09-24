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
/*
** Sorting algorithm used here is a modified version of bubble sort.
** Bubble sort will swap the left value with right if the left value is greater
** than the right value. And it will keep traversing through the array to keep
** swapping the biggest value on the left to the right, until it reaches the end,
** bringing the biggest values to the right. Then the index will be set to 0 and
** and sorting will be performed again and this time the second largest number
** will continue to get swapped until its next to the biggest number.
**
** Sorting algorthim used here is different because everytime a swap is performed
** the index gets set to 0. Unlike bubble sort which will perform multiple swaps
** when traversing until it gets to the end of the array and bring the biggest
** value to the right.
** This sorting algorithm will only perform one swap when it traverses through
** the array and after the swap is done index will be set to 0 and it will go
** through the array again to perform the second swap.
*/

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:49:39 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/30 14:51:00 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*Not graded by mouli*/
void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/*
** When we sort, we look back and compare the existing element with the previous
** number [i -1]. Comparing it forward [i+1] will print garbage value for the
** last number because when i is on the last value, [i+1] will be null. Hence,
** printing garbage values. Values can be compared by looking forward, but
** additional flags would have to be set in place.
*/

void sort_int_tab(int *tab, unsigned int size)
{
//	int max;
	int i;

	i = 0;
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

int main (void)
{
//	int range[] = {4, 2, 2, 2, 1, 1, };
	int range[] = {-9, -2, -3, 2, 1, 5, 1, 0, -9, -9, -77};
	sort_int_tab(range, 11);
	int i = 0;
	while(i < 11)
		printf("%d\n", range[i++]);
	return(0);
}


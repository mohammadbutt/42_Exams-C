/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 20:35:31 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/29 21:06:01 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*Passed mouli*/
int *ft_rrange(int start, int end)
{
	int count;
	int *range;
	int i;

	count = 0;
	i = 0;
	if (start > end)
		count = start - end + 1;
	else if(start < end)
		count = end - start + 1;
	else
		count = 1;
	range = (int *)malloc(sizeof(int) * (count));

	while(count)
	{
		if(end > start)
		{
			range[i] = end;
			i++;
			end--;
		}
		else if(start >= end)
		{
			range[i] = end;
			i++;
			end++;
		}
		count--;
	}
	return(range);
}
/*
int main (void)
{
	int i;
	int *range;
	
	i = 0;
	range = ft_rrange(0, 0);

	while(i <= 4)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return(0);
}
*/

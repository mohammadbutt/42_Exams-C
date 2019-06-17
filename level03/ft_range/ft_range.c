/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 13:59:41 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/17 14:24:49 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <stdio.h>  /*printf(3)*/
#include <stdlib.h> /*malloc(3)*/

int ft_len(int start, int end)
{
	int len;

	len = 0;
	(end > start) && (len = end - start);
	(start > end) && (len = start - end);
	return(++len);
}


int *ft_range(int start, int end)
{
	int i;
	int len;
	int *range;

	i = 0;
	len = ft_len(start, end);
	range = (int *)malloc(sizeof(int) * (len));
	while(i < len)
	{
		(start >= end) && (range[i++] = start--);
		(end > start) && (range[i++] = start++);
	}
	return(range);
}

/*
int main(void)
{
	int start = 0;
	int end = -3;
	int i = 0;
	int len = ft_len(start, end);
	int *range = ft_range(start, end);

	while(i < len)
		printf("%d\n", range[i++]);
}
*/

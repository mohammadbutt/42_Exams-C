/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 20:17:55 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/25 20:56:01 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end);
int ft_count(int start, int end);
int *ft_range(int start, int end)
{
	int *array;
	int i;
	int count;

	i = 0;
	count = 0;
	count = ft_count(start, end);
	array = (int *)malloc(sizeof(int) * (count));
	while (count)
	{
		if(start < end)
			array[i++] = start++;
		else
			array[i++] = start--;
		count--;
	}
	return(array);
}
int ft_count(int start, int end)
{
	int count;
	count = 0;

	if(start > end)
		count = start - end + 1;
	else if(end > start)
		count = end - start + 1;
	else
		count = 1;
	return(count);
}
/*
int main (void)
{
	int i;
	int *array;

	i = 0;
	array = ft_range(1, 3);
	while(i < 3)
		printf("%d\n", array[i++]);
	printf("Test2\n");
	i = 0;
	array = ft_range(-1, 2);
	while(i < 4)
		printf("%d\n", array[i++]);
	printf("Test3\n");
	i = 0;
	array = ft_range(0, -3);
	while(i < 4)
		printf("%d\n", array[i++]);
	printf("Last test\n");
	i = 0;
	array = ft_range(5, 5);
	while(i < 1)
		printf("%d\n", array[i++]);
	return(0);
}
*/
/*
int main (void)
{
	int start;
	int end;
	int count;

	count = 0;

	start = 0;
	end = -3;
	count = ft_count(start, end);

	while(count)
	{
		if(start < end)
			printf("%d\n", start++);
		else
			printf("%d\n", start--);
		count--;
	}
	return(0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 10:25:02 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/25 10:30:55 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int num1 = 11;
	int num2 = 22;

	printf("Before ft_swap:  num1:|%d|  num2:|%d|\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("After  ft_swap:  num1:|%d|  num2:|%d|\n", num1, num2);

}
*/

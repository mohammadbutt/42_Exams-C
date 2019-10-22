/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:06:18 by mbutt             #+#    #+#             */
/*   Updated: 2019/10/22 15:13:43 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
** Should pass examshell.
*/

/*
** count_2_in_num counts how many 2s are there in a number.
** Logic is similar to atoi. If you can do atoi, this function is relatively
** easy to create.
*/

int count_2_in_num(int num)
{
	int count;

	count = 0;

	if(num <= 0)
		return(count);
	while(num)
	{
		if((num % 10 + '0') == '2')
			count++;
		num = num / 10;
	}
	return(count);
}

/*
** This function counts all the 2s from 1 to n.
*/
int count_of_2(int n)
{
	int count;

	count = 0;
	if(n <= 0)
		return(count);
	while(n)
	{
		count = count + count_2_in_num(n);
		n--;
	}
	return(count);
}

/*
int main(void)
{
	int num;
	int count;

	num = 3;
	count = count_of_2(num);

	printf("|%d|\n", count);
}
*/

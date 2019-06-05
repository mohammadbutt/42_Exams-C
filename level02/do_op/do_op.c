/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:55:05 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/05 11:11:37 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h> /*write(2)*/
#include <stdlib.h> /*atoi(3)*/
#include <stdio.h>  /*printf(3)*/

void do_op(char *str1, char c, char *str2)
{
	int num1;
	int num2;
	int result;

	num1 = atoi(str1);
	num2 = atoi(str2);
	result = 0;
	(c == '+') && (result = num1 + num2);
	(c == '-') && (result = num1 - num2);
	(c == '*') && (result = num1 * num2);
	(c == '/') && (result = num1 / num2);
	(c == '%') && (result = num1 % num2);
	printf("%d\n", result);
}

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		write(1, "\n", 1);
		return(0);
	}
	do_op(argv[1], argv[2][0], argv[3]);
}

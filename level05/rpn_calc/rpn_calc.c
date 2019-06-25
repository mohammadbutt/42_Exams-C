/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 18:48:18 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/24 20:27:28 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passes personal tests*/

#include <unistd.h> /*write(2)*/
#include <stdio.h>  /*printf(3)*/
#include <stdlib.h> /*atoi(3) malloc(3) free (3)*/

int is_num(char c)
{
	if(c >= '0' && c <= '9')
		return(1);
	return(0);
}

int ft_operator(char c)
{
	return(c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

int do_op(int a, int b, char c)
{
	int result;

	result = 0;

	(c == '+') && (result = a + b);
	(c == '-') && (result = a - b);
	(c == '*') && (result = a * b);
	(c == '/') && (result = a / b);
	(c == '%') && (result = a % b);

	return(result);
}

void rpn_calc(char *str)
{
	int i;
	int j;
	int stack[4096];

	i = 0;
	j = 0;
	while(str[i])
	{
		if((is_num(str[i]) == 1) || (str[i] == '-' && is_num(str[i+1]) == 1))
			stack[j++] = atoi(str + i);
		if(str[i] == '-')
			i++;
		while(is_num(str[i]) == 1)
			i++;
		while(str[i] == ' ')
			i++;
		if(ft_operator(str[i]) && (str[i+1] == ' ' || str[i+1] == '\0'))
		{
			if(j <= 1) 			
			{
				printf("Error\n");
				return;
			}
			if((stack[j-1] == 0) && (str[i] == '/' || str[i] == '%'))
			{
				printf("Error\n");
				return;
			}
			stack[j-2] = do_op(stack[j-2], stack[j-1], str[i]);
			j--;
			i++;
		}
	}
	if(j != 1)
		printf("Error\n");
	else
		printf("%d\n", stack[0]);

}

int main(int argc, char **argv)
{
	if(argc == 2)
		rpn_calc(argv[1]);
	else
		printf("Error\n");
}

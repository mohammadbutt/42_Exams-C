/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 20:49:46 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/03 21:06:45 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h>

int matchbracket(char a, char b)
{
	if((a == '{' && b == '}') || (a == '[' && b == ']') || (a == '(' && b == ')'))
		return(1);
	return(0);
}

int brackets(char *str)
{
	int i;
	int j;
	char stack[4096];

	i = 0;
	j = 0;
	while(str[i])
	{
		if(str[i] == '{' || str[i] == '[' || str[i] == '(')
		{
			stack[j] = str[i];
			j++;
		}
		if(str[i] == '}' || str[i] == ']' || str[i] == ')')
		{
			if(matchbracket(stack[j-1], str[i]))
				j--;
			else
				return(0);
		}
		i++;
	}
	if(j == 0)
		return(1);
	return(0);
}

int main (int argc, char **argv)
{
	int i;

	i = 1;
	if(argc < 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	argc--;
	while(argc)
	{
		if(brackets(argv[i]))
			write(1, "OK\n", 3);
		else
			write(1, "Error\n", 6);
		i++;
		argc--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 19:57:31 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/03 12:37:54 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* Not graded by examshell. Passed personal tests*/
int match_bracket(char a, char b)
{
	if((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'))
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
			if(match_bracket(stack[j-1], str[i]))
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

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc < 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	while(i < argc)
	{
		if (brackets(argv[i]) == 1)
			write(1, "OK\n", 3);
		else if(brackets(argv[i]) == 0)
			write(1, "Error\n", 6);
		i++;
	}
	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 19:40:52 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/29 20:20:40 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void last_word(char *str)
{
	int i;
	int b;

	i = 0;
	b = 0;

	while(str[i])
		i++;
	i--;
	while(str[i] == ' ' || str[i] == '\t')
		i--;

/*takes care of the edge case. If the string only has spaces without characters
 then the above while loop will bring it back to where it started to the
 0th element, making i equals to -1. Hence, we can can ask the program in the
 below if statement that if i is equal to -1 print newline and end the program*/	
	if(i == -1)
	{
		write(1, "\n", 1);
		return;
	}
	while(str[i] && str[i] != ' ' && str[i] != '\t')
		i--;
	i++;
	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t')
			break;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);

}

int main (int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	last_word(argv[1]);
	return(0);
}

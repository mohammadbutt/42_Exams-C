/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 17:34:37 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/16 18:07:45 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#include <unistd.h> /*write(2)*/

void snake_to_camel(char *str)
{
	int i;

	i = 0;
	while(str[i] && str[i] != '_')
		write(1, &str[i++], 1);
	while(str[i])
	{
		if((str[i] == '_') && (str[i+1] >= 'a' && str[i+1] <= 'z'))
			str[i+1] = str[i+1] - 32;
		else if(str[i] != '_')
			write(1, &str[i], 1);
		i++;
	}

}

int main(int argc, char **argv)
{
	if(argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
}

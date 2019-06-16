/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 19:00:47 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/15 19:46:47 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Did not pass examshell. See last exam trace*/

#include <unistd.h> /*wrtie(2)*/

int ft_space(char c)
{
	if(c == ' ' || c == '\t')
		return(1);
	return(0);
}

void epur_str(char *str)
{
	int i;

	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i])
	{
		if(ft_space(str[i]) == 0)	
			write(1, &str[i], 1);
		if((ft_space(str[i]) == 1) && (ft_space(str[i+1]) == 0 && str[i+1] != '\0'))
			write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
}

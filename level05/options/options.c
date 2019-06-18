/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 21:03:41 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/17 22:23:38 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Failed examshell. See trace*/

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			write(1, &str[i++], 1);
}
int is_it_valid(char *str)
{
	int i;

	i = 1;
	if(str[0] == '-' && str[i] == '\0')
		return(1);
	while(str[0] == '-' && str[i])
	{
		if(!(str[i] >= 'a' && str[i] <= 'z'))
			return(0);
		i++;
	}
	return(1);
}

void options(int argc, char **argv)
{
	int i;
	int j;
	int temp;
	char placeholder[] = "00000000 00000000 00000000 00000000";

	i = 1;
	j = 0;
	temp = 0;
	argc--;
	while(argc)
	{
		if(is_it_valid(argv[i]) == 0)
		{
			ft_putstr("Invalid Option");
			return;
		}
		while(argv[i][j])
		{
			if(argv[i][0] == '-' && argv[i][1] == 'h')
			{
				ft_putstr("options: abcdefghijklmnopqrstuvwxyz");
				return;
			}
			if((argv[i][0] != '-') || (argv[i][0] == '-' && argv[i][1] == '\0'))
				break;
			(argv[i][j] == '-') && (j++);
			(argv[i][j] >= 'y' && argv[i][j] <= 'z') && (argv[i][j] = 'a' + 'z' - argv[i][j] - 91);
			(argv[i][j] >= 'q' && argv[i][j] <= 'x') && (argv[i][j] = 'a' + 'z' - argv[i][j] - 90);
			(argv[i][j] >= 'i' && argv[i][j] <= 'p') && (argv[i][j] = 'a' + 'z' - argv[i][j] - 89);
			(argv[i][j] >= 'a' && argv[i][j] <= 'h') && (argv[i][j] = 'a' + 'z' - argv[i][j] - 88);
			temp = argv[i][j];
			placeholder[temp] = '1';
			j++;
		}
		j = 0;
		i++;
		argc--;
	}
	ft_putstr(placeholder);
}

int main(int argc, char **argv)
{
	if(argc > 1)
		options(argc, argv);
	else if(argc == 1)
		ft_putstr("options: abcdefghijklmnopqrstuvwxyz");
	write(1, "\n", 1);
}

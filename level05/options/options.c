/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 14:45:45 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/17 18:57:30 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Not graded by examshell, but passed personal tests*/

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	if(str)
		while(str[i])
			write(1, &str[i++], 1);
}
void options(int argc, char **argv)
{
	int i;
	int j;
	char placeholder[] = "00000000 00000000 00000000 00000000";
	int temp;

	i = 1;
	j = 0;
	temp = 0;
	argc--;
	while(argc)
	{
		if(argv[i][0] == '-')
		{
			while(argv[i][j])
			{
				j++;
				if(argv[i][j] == '\0')
					break;
				if(!(argv[i][j] >= 'a' && argv[i][j] <= 'z'))
				{
					ft_putstr("Invalid Option");
					return ;
				}
			}
		}
		j = 0;
		while(argv[i][j])
		{
			if(argv[i][0] == '-' && argv[i][1] == 'h')
			{
				ft_putstr("options: abcdefghijklmnopqrstuvwxyz");
				return ;
			}
			if(argv[i][0] != '-')
				break;
			(argv[i][j] == '-') && (j++);
			(argv[i][j] >= 'y' && argv[i][j] <= 'z') && (argv[i][j] = 'a' + 'z' - argv[i][j] - 91);
			(argv[i][j] >= 'q' && argv[i][j] <= 'x') && (argv[i][j] = 'a' + 'z' - argv[i][j] - 90);
			(argv[i][j] >= 'i' && argv[i][j] <= 'p') && (argv[i][j] = 'a' + 'z' - argv[i][j] - 89);
			(argv[i][j] >= 'a' && argv[i][j] <= 'h') && (argv[i][j] = 'a' + 'z' - argv[i][j] - 88);
			temp = argv[i][j++];
			placeholder[temp] = '1';
		}
		j = 0;
		argc--;
		i++;
	}
	ft_putstr(placeholder);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if(argc == 1)
		ft_putstr("options: abcdefghijklmnopqrstuvwxyz");
	else if(argc > 1)
		options(argc, argv);
	write(1, "\n", 1);
}

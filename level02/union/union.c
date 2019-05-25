/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 11:31:57 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/25 13:44:46 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
** This is not the best solution because static memory allocation is performed
** when 1024 is allocated to placeholder.
** Best solution would be able to allocate memory dynamically.
** But this will work with strings of upto 1024 characters.
*/

int		main(int argc, char **argv);
char	*ft_modstrcpy(char *dest, char *source);
int 	main (int argc, char **argv)
{
	int i; /* i keeps incrementing*/
	int a; /* a start at 0 each time upto i*/
	char placeholder[1024];

	i = 0;
	a = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_modstrcpy(placeholder, argv[1]);
	ft_modstrcpy(placeholder, argv[2]);
	write(1, &placeholder[i], 1); /*first character has to be printed before
									entering the while loop*/
	i++;/*printing the first character and incrementing i by 1 makes it greater
		than a and makes is possible for the below while loop to run*/
	while (placeholder[i] && a < i)
	{
		if (placeholder[a] != placeholder[i] && a == (i-1))
		{
			write(1, &placeholder[i], 1);
			a = 0;
			i++;
		}
		if (placeholder[a] != placeholder[i])
			a++;
		if (placeholder[a] == placeholder[i])
		{
			a = 0;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
/*
** function ft_modstrcpy performs similar function to ft_strcpy, but with slight
** modification.
** It goes through the first string and performs string copy, storing the values
** from source1 to dest, then the function appends the second string to the end
** of the dest, which is why on lines 83 and 84  we keep incrementing a while
** it is not equal to '\0'.
** Calling the function first time writes string from argv[1] to placeholder.
** Calling the function second time it will keep incremamting placeholder until
** '\0' is found and then it will start appending argv[2] to the end of
** placeholder.
*/
char *ft_modstrcpy(char *dest, char *source)
{
	int a;
	int i;

	a = 0;
	i = 0;
	while(dest[a] != '\0')
		a++;
	while(source[i])
	{
		dest[a] = source[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return(dest);
}
/*
** Below is what the above function is doing and replacing it with below code
** will have the same effect as the above function ft_modstrcpy.
*/
/*
	int i = 0;
	int a = 0;
	while(argv[1][a])
	{
		placeholder[i] = argv[1][a];
		i++;
		a++;
	}
	a = 0;
	while(argv[2][a])
	{
		placeholder[i] = argv[2][a];
		i++;
		a++;
	}
	a = 0;
	i = 0;
*/

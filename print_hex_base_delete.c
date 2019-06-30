/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 14:32:16 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/26 14:38:58 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> /*for printf*/
#include <stdlib.h>/*for atoi*/

/*Not an exam question*/
/*Can also print binary if the second argument is changed to 2*/

void	print_hex(unsigned int p, int base)
{
	char *str;

	str = "0123456789abcdef";
	if (p == 0)
		write (1, "0", 1);
	
	if(p >= base)
		print_hex(p/base, base);
	p = str[p%base];
	write(1, &p, 1);
}

int ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	nb = 0;
	i = 0;
	sign = 1;

	/*Increments/skips over whitespace in the beginning man isspace*/
	while(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
			str[i] == '\r' || str[i] == ' ')
		i++;
	
	/*If two signs appear one after another,
	  as such -- -+ +- ++ program stops and retrurs 0 */
	if((str[i] == '-' || str[i] == '+') && (str[i+1] == '-' || str[i+1] == '+'))
		return(0);

	/*Changes sign to -1 if [i] is '-' and [i+1] is a digit*/
	if(str[i] == '-' && (str[i+1] >= '0' && str[i+1] <= '9'))
	{
		sign = -1;
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = 10 * nb +(str[i] - '0');
		i++;
	}
	return(nb*sign);
}
/*
int main(void)
{
	char string[] = "1234";
	int number = 0;

	number = ft_atoi(string);
	printf("%d\n", number*2);
	printf("    atoi|%d|\n", atoi("13"));
	printf(" ft_atoi|%d|\n\n", ft_atoi("13"));
	printf("    atoi|%d|\n", atoi("245897"));
	printf(" ft_atoi|%d|\n\n", ft_atoi("245897"));
	printf("    atoi|%d|\n", atoi("  35"));
	printf(" ft_atoi|%d|\n\n", ft_atoi("  35"));
	printf("    atoi|%d|\n", atoi("  47  443"));
	printf(" ft_atoi|%d|\n\n", ft_atoi("  47  443"));
	printf("    atoi|%d|\n", atoi("  -591"));
	printf(" ft_atoi|%d|\n\n", ft_atoi("  -591"));
	printf("    atoi|%d|\n", atoi("  - 61"));
	printf(" ft_atoi|%d|\n\n", ft_atoi("  - 61"));
	printf("    atoi|%d|\n", atoi("  -+73"));
	printf(" ft_atoi|%d|\n\n", ft_atoi("  -+73"));
	printf("    atoi|%d|\n", atoi("  --85"));
	printf(" ft_atoi|%d|\n\n", ft_atoi("  --85"));
	printf("    atoi|%d|\n", atoi("  shouldnotwork85"));
	printf(" ft_atoi|%d|\n\n", ft_atoi("  shouldnotwork85"));
	return(0);
}
*/
int		main(int argc, char *argv[])
{
	if (argc == 3)
		print_hex(ft_atoi(argv[1]), ft_atoi(argv[2]));
	write(1, "\n", 1);
	return (0);
}

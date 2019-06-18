/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 15:08:39 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/26 18:21:42 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Did not pass examshell. See exam trace*/

#include <unistd.h> /*write(2)*/
#include <stdlib.h> /*atoi(3)*/
#include <stdio.h>  /*printf(3)*/

void print_hex(unsigned int num)
{
	char *str;
	
	str = "0123456789abcdef";
	if (num == 0)
		write(1, "0", 1);
	if(num >= 16)
		print_hex(num/16);
	num = str[num%16];
	write(1, &num, 1);
}

int ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;

	/*Increments/skips over whitespaces*/
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	/*If there are two consecutive signs, --, -+, +-, or ++, then program ends
	 * and returns 0*/
	if ((str[i] == '-' || str[i] == '+') && (str[i+1] == '-' || str[i+1] == '+'))
		return (0);
	/*If [i] is '-' and [i+1] is a digit then changes the sign to negative*/
	if (str[i] == '-' && (str[i+1] >= '0' && str[i+1] <= '9'))
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = 10 * nb + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return(0);
}

/*
// to test ft_atoi
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

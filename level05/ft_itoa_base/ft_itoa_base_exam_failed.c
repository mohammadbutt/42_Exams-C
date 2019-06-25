/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 11:20:52 by exam              #+#    #+#             */
/*   Updated: 2019/06/25 12:02:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> /*printf(3)*/
#include <stdlib.h> /*malloc(3)*/

int ft_abs(int num)
{
	if(num < 0)
		num = num * -1;
	return(num);
}

int ft_numlen(int value, int base)
{
	int i;

	i = 0;
	if(value < 0 && base == 10)
		i++;
	while(value)
	{
		i++;
		value = value / base;
	}
	return(i);
}

char *ft_itoa_base(int value, int base)
{
	int numlen;
	char placeholder[] = "0123456789ABCDEF";
	char *str;

	if(value == 0)
		return("0");
	if(base < 2 || base > 16)
		return("0");
	numlen = ft_numlen(value, base);
	str = malloc(sizeof(char) * (numlen + 1));
	if(value < 0 && base == 10)
		str[0] = '-';
	str[numlen]	= '\0';
	numlen--;
	while(value)
	{
		str[numlen] = placeholder[ft_abs(value%base)];
		value = value / base;
		numlen--;
	}
	return(str);
}
/*
int main(void)
{
	int base = 4;
	printf("|%s|\n", ft_itoa_base(2147483647, base));
	printf("|%s|\n", ft_itoa_base(214748364, base));
	printf("|%s|\n", ft_itoa_base(21474836, base));
	printf("|%s|\n", ft_itoa_base(2147483, base));
	printf("|%s|\n", ft_itoa_base(214748, base));
	printf("|%s|\n", ft_itoa_base(21474, base));
	printf("|%s|\n", ft_itoa_base(2147, base));
	printf("|%s|\n", ft_itoa_base(214, base));
	printf("|%s|\n", ft_itoa_base(21, base));
	printf("|%s|\n", ft_itoa_base(2, base));
	printf("|%s|\n", ft_itoa_base(0, base));
	printf("|%s|\n", ft_itoa_base(-2, base));
	printf("|%s|\n", ft_itoa_base(-21, base));
	printf("|%s|\n", ft_itoa_base(-214, base));
	printf("|%s|\n", ft_itoa_base(-2147, base));
	printf("|%s|\n", ft_itoa_base(-21474, base));
	printf("|%s|\n", ft_itoa_base(-214748, base));
	printf("|%s|\n", ft_itoa_base(-2147483, base));
	printf("|%s|\n", ft_itoa_base(-21474836, base));
	printf("|%s|\n", ft_itoa_base(-214748364, base));
	printf("|%s|\n", ft_itoa_base(-2147483648, base));
	printf("|%d|\n", ft_numlen(-2147483648, base));
}
*/
/*
int main(int argc, char **argv)
{
	int value = atoi(argv[1]);
	int base = atoi(argv[2]);

	if(argc == 3)
		printf("|%s|\n", ft_itoa_base(value, base));
	else if(argc != 3)
		return(printf("\n"));
}
*/





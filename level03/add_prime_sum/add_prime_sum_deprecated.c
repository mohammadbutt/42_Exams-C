/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:43:09 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/26 18:17:00 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /*for write*/
//#include <stdio.h>  /*for printf*/
#include <stdlib.h> /*for exit(3)*/

int	ft_atoi(char *str)
{
	int i;
	int nb;
	int sign;

	i = 0;
	nb = 0;
	sign = 1;

	while(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ' )
		i++;

	if((str[i] == '-' || str[i] == '+') && (str[i+1] == '-' || str[i+1] == '+'))
		return(0);
	if ((str[i] == '-') && (str[i+1] >= '0' && str[i+1] <= '9'))
	{
		sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = 10 *nb +(str[i] - '0');
		i++;
	}
	return(nb * sign);
}
void ft_putnbr(int num)
{
	int i;
	i = 0;
	
	if(num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (num < 0)
	{
		num = num * -1;
		write(1, "-", 1);
	}
	if(num >= 10)
		ft_putnbr(num/10);
	num = num%10 + '0';
	write(1, &num, 1);
}

/*
** function is_it_prime determines if a number is prime or not.
** Examples of prime numbers: 2, 3, 5, 7, 11, 13, 19, 23....
** RETURN VALUE: If the number is a prime, it returns 1.
** But if a number is not prime then it returns 0.
*/
int is_it_prime(int num)
{
	int divisor;

	divisor = num - 1;
	if(num <=1)
		return(0);
	while(divisor >= 2)
	{
		if((num % divisor) == 0)
			return(0);
		divisor--;
	}
	return(1);
}
/*
* Adds all primes of a number.
*/
int add_prime(int num)
{
	int total;

	total = 0;
	while(num)
	{
		if(is_it_prime(num) == 1)
			total = total + num;
		num--;
	}
	return(total);
}
int main(int argc, char **argv)
{
	int number;
	number = 0;
	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	number = ft_atoi(argv[1]);
	if (number < 0)
	{
		write(1, "0\n",2);
		return (0);
	}
	ft_putnbr(add_prime(number));
	write(1, "\n", 1);
	return(0);
}
/*
// to test atoi and ft_putnbr
int main(void)
{
	char string[] = "1234";
	int number = 0;
	number = ft_atoi(string);
	printf("%d\n", number*2);
	printf("    atoi|%d|\n", atoi("13"));
	write(1," ft_atoi|", 9);ft_putnbr(ft_atoi("13")); write(1, "|\n\n", 3);
	printf("    atoi|%d|\n", atoi("245897"));
	write(1," ft_atoi|", 9);ft_putnbr(ft_atoi("245897")); write(1, "|\n\n", 3);
	printf("    atoi|%d|\n", atoi("  35"));
	write(1," ft_atoi|", 9);ft_putnbr(ft_atoi("35")); write(1, "|\n\n", 3);
	printf("    atoi|%d|\n", atoi("  47  443"));
	write(1," ft_atoi|", 9);ft_putnbr(ft_atoi("  47  443")); write(1, "|\n\n", 3);
	printf("    atoi|%d|\n", atoi("  -591"));
	write(1," ft_atoi|", 9);ft_putnbr(ft_atoi("   -591")); write(1, "|\n\n", 3);
	printf("    atoi|%d|\n", atoi("  - 61"));
	write(1," ft_atoi|", 9);ft_putnbr(ft_atoi("   - 61")); write(1, "|\n\n", 3);
	printf("    atoi|%d|\n", atoi("  -+73"));
	write(1," ft_atoi|", 9);ft_putnbr(ft_atoi("  -+73")); write(1, "|\n\n", 3);
	printf("    atoi|%d|\n", atoi("  --85"));
	write(1," ft_atoi|", 9);ft_putnbr(ft_atoi("  --85")); write(1, "|\n\n", 3);
	printf("    atoi|%d|\n", atoi("  shouldnotwork85"));
	write(1," ft_atoi|", 9);ft_putnbr(ft_atoi("  shouldnotwork85")); write(1, "|\n\n", 3);
	return(0);
}
*/

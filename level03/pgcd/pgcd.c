/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:20:13 by mbutt             #+#    #+#             */
/*   Updated: 2019/05/30 14:25:02 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
** Following functions are allowed for this question:
** printf, atoi, malloc, and free. But I wanted to create atoi and putnbr to get
** some practice on them.
*/

/*passed mouli test*/

int ft_atoi(char *str)
{
	int nb;
	int sign;
	int i;

	nb = 0;
	sign = 1;
	i = 0;
	while(str[i] == '\t' || str[i] == ' ')
		i++;
	if((str[i] == '+' || str[i] == '-') && (str[i+1] == '+' || str[i+1] == '-'))
		return(0);
	if((str[i] == '-'  || str[i] == '+' ) && (str[i+1] >= '0' && str[i+1] <= '9'))
	{
		if(str[i] == '-')
			sign = - 1;
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return(nb * sign);
}

void ft_putnbr(int num)
{
	if(num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num = -1 * num;
	}
	if (num >= 10)
		ft_putnbr(num/10);
	num = num % 10 + '0';
	write(1, &num, 1);
}

void ft_pgcd(char *str1, char *str2)
{
	int num1;
	int num2;
	int pgcd;
	
	pgcd = 0;
	num1 = ft_atoi(str1);
	num2 = ft_atoi(str2);
	if(num2 <= num1)
		pgcd = num2;
	else if (num1 < num2)
		pgcd = num1;

	while(pgcd >= 1)
	{
		if((num1 % pgcd == 0) && (num2 % pgcd == 0))
		{
			ft_putnbr(pgcd);
			return ;
		}
		pgcd--;
	}
}

int main (int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(0);
	}
	ft_pgcd(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
/*
// Tests for atoi and putnbr
int main(void)
{
	char *str1 = "111";
	char *str2 = "111";

	char *str3 = " 222";
	char *str4 = "  222";

	char *str5 = "  +33333";
	char *str6 = "  +33333";

	char *str7 = "  -4444444";
	char *str8 = "  -4444444";

	char *str9 = "  --5555555";
	char *str10 = "  --5555555";

	char *str11 = "  ++6666666";
	char *str12 = "  ++6666666";

	char *str13 = "-2147483648";
	char *str14 = "-2147483648";

	ft_putnbr(ft_atoi(str1));
	printf("\n%d\n", ft_atoi(str1));
	printf("%d\n\n", atoi(str2));

	ft_putnbr(ft_atoi(str3));
	printf("\n%d\n", ft_atoi(str3));
	printf("%d\n\n", atoi(str4));

	ft_putnbr(ft_atoi(str5));
	printf("\n%d\n", ft_atoi(str5));
	printf("%d\n\n", atoi(str6));

	ft_putnbr(ft_atoi(str7));
	printf("\n%d\n", ft_atoi(str7));
	printf("%d\n\n", atoi(str8));

	ft_putnbr(ft_atoi(str9));
	printf("\n%d\n", ft_atoi(str9));
	printf("%d\n\n", atoi(str10));

	ft_putnbr(ft_atoi(str11));
	printf("\n%d\n", ft_atoi(str11));
	printf("%d\n\n", atoi(str12));

	ft_putnbr(ft_atoi(str13));
	printf("\n%d\n", ft_atoi(str13));
	printf("%d\n\n", atoi(str14));

	return(0);
}
*/

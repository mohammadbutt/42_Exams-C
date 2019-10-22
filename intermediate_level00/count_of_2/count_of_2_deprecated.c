/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2_deprecated.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:06:00 by mbutt             #+#    #+#             */
/*   Updated: 2019/10/22 15:06:09 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Passes examshell. but there are few things that wrong with this.
** 1. ft_strcpy is not necessary.
** 2. And there is a faster way to determine how many 2s there are, which can
** make calculate the number of 2s twice as fast. Will update it to the
** improved version.
*/

#include <stdio.h>


char *ft_strcpy(char *source, char *dest)
{
	int i;
	
	i = 0;

	if (dest)
		while (dest[i])
		{
			source[i] = dest[i];
			i++;
		}
	source[i] = '\0';
	return(source);
}

/*
** Count how long a numerical number is so that number can be used as an index
** to create the string.
*/
int ft_numlen(int num)
{
	int i;

	i = 0;
	while(num)
	{
		num = num/10;
		i++;
	}
	return(i);
}

/*
** Since no functions are allowed for this, instead of using malloc, stack is
** is used to allocate memory.
** Same stack is used over and over again.
*/

char *ft_itoa(char str[], int num)
{
	int len;

	if(num == 0)
		return(ft_strcpy(str, "0"));
	len = ft_numlen(num);
	str[len] = '\0';
	len--;
	while(num)
	{
		str[len] = num % 10 + '0';
		len--;
		num = num/10;
	}
	return(str);
}

/*
** count the number of 2s that appear in a string
*/
int count_2_in_array(char str[])
{
	int i;
	int count;

	i = 0;
	count = 0;

	if(str)
		while(str[i])
			if(str[i++] == '2')
				count++;
	return(count);
}

/*
** Since we dont have access to the main, we allocate memory for the
** stack here.
*/

int    count_of_2(int n)
{
	char str[11];
	int count;

	count = 0;

	if(n <= 0)
		return(count);
	while(n)
	{
		str[0] = '\0';
		ft_itoa(str, n);
		count = count + count_2_in_array(str);
		n--;
	}
	return(count);
}

/*
int main(void)
{
	int num;
	int count;

	num = -1;
	count = count_of_2(num);

	printf("|%d|\n", count);
}
*/

/*
int main(void)
{

	char str[11];
	int num1 = 2147483647;


	ft_itoa(str, num1);
	printf("%s\n", str);

	while(num1)
	{
		ft_itoa(str, num1);
		printf("|%s|\n", str);
		num1 = num1/10;
	}
	ft_itoa(str, 0);
	printf("|%s|\n",str);

	printf("|%d|\n", count_2_in_array("21342252"));
}
*/

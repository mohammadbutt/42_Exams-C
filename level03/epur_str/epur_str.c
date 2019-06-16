/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 19:00:47 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/15 20:59:33 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Should pass examshell*/
#include <unistd.h> /*wrtie(2)*/

int ft_space(char c)
{
	if(c == ' ' || c == '\t')
		return(1);
	return(0);
}

int ft_wordcount(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i])
	{
		if(ft_space(str[i]) == 0 && (ft_space(str[i+1]) == 1 || str[i+1] == '\0'))
			count++;
		i++;
	}
	return(count);
}

void epur_str(char *str)
{
	int i;
	int wordcount;

	i = 0;
	wordcount = ft_wordcount(str);
	while(wordcount)
	{
		while(ft_space(str[i]) == 1)
			i++;
		while(ft_space(str[i]) == 0)
			write(1, &str[i++], 1);
		if(ft_space(str[i]) == 1 && wordcount > 1)
			write(1, " ", 1);
		wordcount--;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
}

/*
int main(void)
{
//	char *str1 = "This \t\tis \t\t\ta\t\t\t\ttest  \t\t\t";
	char *str = "	   	AIZGnd3m   		Vz38	  7PNnd   MYSrRkjl 	\
				 OrG8yDt 	 uqSPAC6lNa4I		 	 nlT6zEc2usa9rJdOV \
				 SlQry		  P1B84RACH	 			";
	printf("%d\n", ft_wordcount(str));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 16:31:37 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/24 18:30:50 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> /*write(2)*/
#include <stdio.h>  /*printf(3)*/
#include <stdlib.h> /*atoi(3) malloc(3) free(3)*/
#include <string.h> /*strlen*/

int main(void)
{
	char *str = "123    9494    -48      5456456";
	int stack[1024];
	int i = 0;
	int j = 0;
	int len = strlen((char *)str);

	while(str[i])
	{
		while(str[i] == ' ')
			i++;
		if((str[i] >= '0' && str[i] <= '9') || str[i] == '-')
			stack[j++] = atoi(str+i);
		if(str[i] == '-')
			i++;
		while(str[i] >= '0' && str[i] <= '9')
			i++;
//		len--;
	}
	j = 0;
	while(stack[j])
		printf("%d\n", stack[j++]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:43:36 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/13 14:54:17 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Passed examshell*/
/* Reference for main
** http://nigal.freeshell.org/42/exam-solutions/4-0-ft_list_foreach_MAIN.c
*/

#include "ft_list.h"
#include <unistd.h> /*write(3)*/
#include <stdlib.h> /*malloc(3)*/

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while(begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

/*
void ft_putstr(char *str)
{
	int i;
	i = 0;
	if(str)
		while(str[i])
			write(1, &str[i++], 1);
}

void print_data_with_line(void *data)
{
	ft_putstr(data);
	write(1, "\n", 1);
}

void print_data_with_space(void *data)
{
	ft_putstr(data);
	write(1, " ", 1);
}

t_list stored_data(t_list *test_list)
{
	test_list = malloc(sizeof(test_list));
	test_list->data = "Hello";
	test_list->next = malloc(sizeof(test_list));
	test_list->next->data = "we";
	test_list->next->next = malloc(sizeof(test_list));
	test_list->next->next->data = "are";
	test_list->next->next->next = malloc(sizeof(test_list));
	test_list->next->next->next->data = "learning";
	test_list->next->next->next->next = malloc(sizeof(test_list));
	test_list->next->next->next->next->data = "structs";
	test_list->next->next->next->next->next = NULL;
	return(*test_list);
}

int	main(void)
{

	t_list test_list;
	test_list = stored_data(&test_list);
	ft_list_foreach(&test_list, print_data_with_line);
	ft_list_foreach(&test_list, print_data_with_space);
	return (0);
}
*/

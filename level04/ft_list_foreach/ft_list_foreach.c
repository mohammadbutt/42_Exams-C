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
/*Passed examshell*/
/*reference for main http://nigal.freeshell.org/42/exam-solutions/4-0-ft_list_foreach_MAIN.c*/

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

void	print_data(void *data)
{
	ft_putstr(data);
	write(1, "\n", 1);
}

int	main(void)
{
	t_list *test_list;
	test_list = malloc(sizeof(t_list));
	test_list->data = "Hello";
	test_list->next = malloc(sizeof(t_list));
	test_list->next -> data = "This is a test";
	test_list->next -> next = malloc(sizeof(t_list));
	test_list->next -> next -> data = "Does it work?";
	test_list->next -> next -> next = NULL;

	ft_list_foreach(test_list, print_data);
	return (0);
}
*/

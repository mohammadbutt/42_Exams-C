/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 15:22:05 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/02 15:28:24 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	while(begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

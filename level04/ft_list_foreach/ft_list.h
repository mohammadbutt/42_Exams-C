/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:40:27 by mbutt             #+#    #+#             */
/*   Updated: 2019/06/13 14:57:55 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Passed examshell*/

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct 		s_list
{
	struct s_list 	*next;
	void 		*data;
}			t_list;

#endif

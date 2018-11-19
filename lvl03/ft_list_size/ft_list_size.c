/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaluh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 15:32:58 by tmaluh            #+#    #+#             */
/*   Updated: 2018/11/17 15:32:59 by tmaluh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*lst;

	i = 0;
	lst = begin_list;
	if (lst)
		while (!(lst->next))
		{
			lst = lst->next;
			++i;
		}
	return (i);
}

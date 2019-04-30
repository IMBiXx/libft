/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:03:56 by exam              #+#    #+#             */
/*   Updated: 2019/04/30 11:14:24 by valecart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_data		*sort_data(t_data *lst, int (*cmp)(int, int))
{
	int		tmp;
	t_data	*head;

	tmp = 0;
	head = lst;
	while (lst->next)
	{
		if (cmp(lst->data, (lst->next)->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);


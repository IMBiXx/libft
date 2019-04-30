/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:03:56 by exam              #+#    #+#             */
/*   Updated: 2019/04/30 11:56:37 by valecart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		tmp;
	t_list	*head;

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
}

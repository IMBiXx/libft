/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valecart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:57:54 by valecart          #+#    #+#             */
/*   Updated: 2019/04/05 12:36:33 by valecart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *li)
{
	if (!li)
	{
		ft_putstr("liste vide\n");
		return ;
	}
	while (li)
	{
		ft_putendl(li->content);
		li = li->next;
	}
}

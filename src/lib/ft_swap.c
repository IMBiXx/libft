/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valecart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:21:00 by valecart          #+#    #+#             */
/*   Updated: 2019/05/21 15:21:01 by valecart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *a, void *b, size_t s)
{
	if (a != b)
		while (s-- > 0)
		{
			((unsigned char *)a)[s] ^= ((unsigned char *)b)[s];
			((unsigned char *)b)[s] ^= ((unsigned char *)a)[s];
			((unsigned char *)a)[s] ^= ((unsigned char *)b)[s];
		}
}

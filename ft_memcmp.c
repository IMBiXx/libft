/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 01:49:33 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/04 01:55:51 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((const char*)s1)[i] == ((const char*)s2)[i])
			i++;
		else
			return (((const char*)s1)[i] - ((const char*)s2)[i]);
	}
	return (0);
}

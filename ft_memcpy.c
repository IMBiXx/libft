/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:47:01 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/03 17:01:38 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void* src, size_t n)
{
	unsigned int	i;

	i = -1;
	while (++i < n)
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
	return (dst);
}

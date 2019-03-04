/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:07:25 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/03 16:27:53 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	v;;

	i = 0;
	v = (unsigned char)c;
	while (i < len)
		((unsigned char*)(b))[i++] = v;
	return(b);
}

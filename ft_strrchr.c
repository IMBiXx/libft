/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 15:45:40 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/06 15:53:09 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	find;
	int				i;

	i = ft_strlen(s);
	find = c;
	if (find == '\0')
		return ((char*)&s[i + 1]);
	while (i > 0)
	{
		if (s[i] == find)
			return ((char*)&s[i]);
		i--;
	}
	return (NULL);
}

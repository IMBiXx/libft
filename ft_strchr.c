/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 15:31:27 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/06 15:40:10 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	find;
	int				i;

	i = 0;
	find = c;
	if (find == '\0')
		return ((char*)&s[ft_strlen(s) + 1]);
	while (s[i])
	{
		if (s[i] == find)
			return ((char*)&s[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 23:26:21 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/06 23:32:08 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*new;

	if (f && s)
	{
		i = 0;
		j = ft_strlen(s);
		new = (char*)malloc(sizeof(char) * j);
		while (s[i])
		{
			new[i] = f(s[i]);
			i++;
		}
		return (new);
	}
	return (NULL);
}

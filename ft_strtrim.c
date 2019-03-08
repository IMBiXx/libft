/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:56:41 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/08 13:34:42 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		min;
	int		max;
	int		i;

	i = 0;
	min = 0;
	max = ft_strlen(s) - 1;
	while ((s[min] == ' ' || s[min] == '\t' || s[min] == '\n') && s[min])
		min++;
	while ((s[max] == ' ' || s[max] == '\t' || s[max] == '\n') && max > min)
		max--;
	if (max - min > 0)
		new = ft_memalloc(max - min + 1);
	else
		return (NULL);
	while (min <= max)
	{
		new[i] = s[min];
		i++;
		min++;
	}
	new[i] = '\0';
	return (new);
}

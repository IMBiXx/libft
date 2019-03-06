/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 19:16:20 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/06 20:05:22 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		ret;
	int		i;
	int		sign;

	sign = 1;
	i = 0;
	ret = 0;
	while (str[i] <= 32 && str[i])
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]) != 0 && str[i])
	{
		ret = (ret * 10) + str[i] - 48;
		i++;
	}
	return (ret * sign);
}

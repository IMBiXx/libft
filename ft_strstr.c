/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 15:54:19 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/06 15:58:17 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		j;
	char	*ptr;

	if (haystack == 0 || needle == 0)
		return (0);
	ptr = (char*)haystack;
	j = 0;
	if (needle[j] == '\0')
		return (ptr);
	while (*ptr != '\0')
	{
		while (ptr[j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (ptr);
		}
		ptr++;
		j = 0;
	}
	return (0);
}

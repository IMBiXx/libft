/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 13:41:51 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/08 15:45:18 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 1;
	while (s[i] == c)
		i++;
	if (!s[i])
		words = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			words++;
			while (s[i] == c)
				i++;
			if (!s[i])
				words--;
		}
		i++;
	}
	return (words);
}

int		*ft_len_words(char const *s, char c, int *len)
{
	int		i;
	int		tmp;
	int		current;

	i = 0;
	current = 0;
	while (s[i] == c)
		i++;
	tmp = i;
	while (s[i])
	{
		if (s[i] == c)
		{
			len[current] = i - tmp;
			current++;
			while (s[i] == c)
				i++;
			if (!s[i])
			{
				len[current] = i - tmp;
				return (len);
			}
			tmp = i;
		}
		i++;
	}
	if (s[i - 1] != c)
		len[current] = i - tmp;
	return (len);
}

char	*ft_fill_tab(char const *s, char c, char *tab, int current_word)
{
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	words = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (words == current_word)
		{
			if (words > 0)
				i--;
			while (s[i] != c)
			{
				tab[j] = s[i];
				j++;
				i++;
			}
			tab[j] = '\0';
			return (tab);
		}
		if (s[i] == c)
		{
			words++;
			while (s[i] == c)
				i++;
			if (!s[i])
				words--;
		}
		i++;
	}
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		*len;
	int		words;
	int		i;

	i = 0;
	if ((words = ft_count_words(s, c)) == 0)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * words)) || \
			!(len = (int*)malloc(sizeof(int) * words)))
		return (NULL);
	len = ft_len_words(s, c, len);
	while (i < words)
	{
		if (!(tab[i] = (char*)malloc(sizeof(char) * len[i] + 1)))
			return (NULL);
		tab[i] = ft_fill_tab(s, c, tab[i], i);
		i++;
	}
	free(len);
	return (tab);
}

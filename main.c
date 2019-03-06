/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 18:45:21 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/06 14:04:52 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	printf("### memset tests ###\n");
	char	memset_s1[] = "bonjour";
	char	memset_s2[] = "bonjour";
	int		memset_n = 3;
	printf("mine:\t\t->%s<-\n", ft_memset(memset_s1, 42, memset_n));
	printf("expected:\t->%s<-\n", memset(memset_s2, 42, memset_n));

	printf("\n### bzero tests ###\n");
	char	bzero_s1[] = "bonjour";
	char	bzero_s2[] = "bonjour";
	int		bzero_n = 2;
	ft_bzero(bzero_s1, bzero_n);
	bzero(bzero_s2, bzero_n);
	printf("mine:\t\t->%s<-\n", bzero_s1);
	printf("\t\t->%s<-\n", &bzero_s1[bzero_n+1]);
	printf("expected:\t->%s<-\n", bzero_s2);
	printf("\t\t->%s<-\n", &bzero_s2[bzero_n+1]);

	printf("\n### memcpy tests ###\n");
	char	memcpy_src[] = "bonjour les amis";
	char	memcpy_dst1[10] = "les amis";
	char	memcpy_dst2[10] = "les amis";
	int		n5 = 4;
	printf("mine:\t\t->%s<-\n", ft_memcpy(memcpy_dst1, memcpy_src, n5));
	printf("expected:\t->%s<-\n", memcpy(memcpy_dst2, memcpy_src, n5));

	printf("\n### memccpy tests ###\n");
	char	memccpy_src[] = "bonjour les amis";
	char	memccpy_dst1[] = "eh oui salut les potes";
	char	memccpy_dst2[] = "eh oui salut les potes";
	int		memccpy_c = 42;
	int		memccpy_n = 3;
	printf("mine:\t\t->%s<-\n", ft_memccpy(memccpy_dst2, memccpy_src, memccpy_c, memccpy_n));
	printf("mine:\t\t->%s<-\n", memccpy_dst2);
	printf("expected:\t->%s<-\n", memccpy(memccpy_dst1, memccpy_src, memccpy_c, memccpy_n));
	printf("expected:\t->%s<-\n", memccpy_dst1);

	printf("\n### memmove tests ###\n");
	char	memmove_src[] = "bonjour les amis";
	char	memmove_dst1[] = "eh oui salut les potes";
	char	memmove_dst2[] = "eh oui salut les potes";
	size_t	memmove_len = 7;
	printf("mine:\t\t->%s<-\n", ft_memmove(memmove_dst1, memmove_src, memmove_len));
	printf("mine:\t\t->%s<-\n", memmove_dst1);
	printf("expected:\t->%s<-\n", memmove(memmove_dst2, memmove_src, memmove_len));
	printf("expected:\t->%s<-\n", memmove_dst2);

	printf("\n### memchr tests ###\n");
	char	memchr_s[] = "eh oui sal*ut les potes";
	size_t	memchr_n = 15;
	int		memchr_c = 42;
	printf("mine:\t\t->%s<-\n", ft_memchr(memchr_s, memchr_c, memchr_n));
	printf("expected:\t->%s<-\n", memchr(memchr_s, memchr_c, memchr_n));

	printf("\n### memcmp tests ###\n");
	char	memcmp_s1[] = "eh oui salut les potes";
	char	memcmp_s2[] = "eh oui salut les amis";
	size_t	memcmp_n = 19;
	printf("mine:\t\t->%d<-\n", ft_memcmp(memcmp_s1, memcmp_s2, memcmp_n));
	printf("expected:\t->%d<-\n", memcmp(memcmp_s1, memcmp_s2, memcmp_n));

	printf("\n### strlen tests ###\n");
	char	strlen_s[] = "eh oui salut les potes";
	printf("mine:\t\t->%zu<-\n", ft_strlen(strlen_s));
	printf("expected:\t->%zu<-\n", strlen(strlen_s));

	printf("\n### strdup tests ###\n");
	char	strdup_src[] = "bonjour les amis";
	printf("mine:\t\t->%s<-\n", ft_strdup(strdup_src));
	printf("expected:\t->%s<-\n", strdup(strdup_src));

	printf("\n### strcpy tests ###\n");
	char	strcpy_src[] = "bonjour les amis";
	char	strcpy_dst1[] = "eh oui salut les potes";
	char	strcpy_dst2[] = "eh oui salut les potes";
	printf("mine:\t\t->%s<-\n", ft_strcpy(strcpy_dst1, strcpy_src));
	printf("expected:\t->%s<-\n", strcpy(strcpy_dst2, strcpy_src));

	printf("\n### strncpy tests ###\n");
	char	strncpy_src[] = "bonjour les amis";
	char	strncpy_dst1[] = "eh oui salut les potes";
	char	strncpy_dst2[] = "eh oui salut les potes";
	size_t	strncpy_n = 7;
	printf("mine:\t\t->%s<-\n", ft_strncpy(strncpy_dst1, strncpy_src, strncpy_n));
	printf("expected:\t->%s<-\n", strncpy(strncpy_dst2, strncpy_src, strncpy_n));

	return 0;
}
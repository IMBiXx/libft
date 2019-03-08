/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Valentin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 18:45:21 by Valentin          #+#    #+#             */
/*   Updated: 2019/03/08 15:41:36 by Valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(void)
{
	printf("### first part of the libft project ###\n\n");
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

	printf("\n### strcat tests ###\n");
	char	strcat_src[] = "bonjour les amis";
	char	strcat_dst1[50] = "eh oui salut les potes";
	char	strcat_dst2[50] = "eh oui salut les potes";
	printf("mine:\t\t->%s<-\n", ft_strcat(strcat_dst1, strcat_src));
	printf("expected:\t->%s<-\n", strcat(strcat_dst2, strcat_src));

	printf("\n### strncat tests ###\n");
	char	strncat_src[] = "bonjour les amis";
	char	strncat_dst1[50] = "eh oui salut les potes";
	char	strncat_dst2[50] = "eh oui salut les potes";
	size_t	strncat_n = 11;
	printf("mine:\t\t->%s<-\n", ft_strncat(strncat_dst1, strncat_src, strncat_n));
	printf("expected:\t->%s<-\n", strncat(strncat_dst2, strncat_src, strncat_n));

	printf("\n### strlcat tests ###\n");
	char	strlcat_src[] = "bonjour les amis";
	char	strlcat_dst1[50] = "eh oui salut les potes";
	char	strlcat_dst2[50] = "eh oui salut les potes";
	size_t	strlcat_n = 11;
	printf("mine:\t\t->%zu<-\n", ft_strlcat(strlcat_dst1, strlcat_src, strlcat_n));
	printf("mine:\t\t->%s<-\n", strlcat_dst1);
	printf("expected:\t->%zu<-\n", strlcat(strlcat_dst2, strlcat_src, strlcat_n));
	printf("expected:\t->%s<-\n", strlcat_dst2);

	printf("\n### strchr tests ###\n");
	char	strchr_s[] = "bonj*ur les *mis";
	int		strchr_c = 42;
	printf("mine:\t\t->%s<-\n", ft_strchr(strchr_s, strchr_c));
	printf("expected:\t->%s<-\n", strchr(strchr_s, strchr_c));

	printf("\n### strrchr tests ###\n");
	char	strrchr_s[] = "bonj*ur les *mis";
	int		strrchr_c = 42;
	printf("mine:\t\t->%s<-\n", ft_strrchr(strrchr_s, strrchr_c));
	printf("expected:\t->%s<-\n", strrchr(strrchr_s, strrchr_c));

	printf("\n### strstr tests ###\n");
	char	strstr_to_find[] = "les";
	char	strstr_str[] = "eh oui salut llles potes";
	printf("mine:\t\t->%s<-\n", ft_strstr(strstr_str, strstr_to_find));
	printf("expected:\t->%s<-\n", strstr(strstr_str, strstr_to_find));

	printf("\n### strnstr tests ###\n");
	char	strnstr_to_find[] = "les";
	char	strnstr_str[] = "eh oui salut llles potes";
	size_t	strnstr_len = 17;
	printf("mine:\t\t->%s<-\n", ft_strnstr(strnstr_str, strnstr_to_find, strnstr_len));
	printf("mine:\t\t->%s<-\n", ft_strnstr(strnstr_str, strnstr_to_find, strnstr_len + 1));
	printf("expected:\t->%s<-\n", strnstr(strnstr_str, strnstr_to_find, strnstr_len));
	printf("expected:\t->%s<-\n", strnstr(strnstr_str, strnstr_to_find, strnstr_len + 1));

	printf("\n### strcmp tests ###\n");
	char	strcmp_s1[] = "bonjour les amis";
	char	strcmp_s2[] = "bonjour les potes";
	printf("mine:\t\t->%d<-\n", ft_strcmp(strcmp_s1, strcmp_s2));
	printf("expected:\t->%d<-\n", strcmp(strcmp_s1, strcmp_s2));
	char	strcmp_s3[] = "";
	char	strcmp_s4[] = "bonjour les potes";
	printf("mine:\t\t->%d<-\n", ft_strcmp(strcmp_s3, strcmp_s4));
	printf("expected:\t->%d<-\n", strcmp(strcmp_s3, strcmp_s4));
	char	strcmp_s5[] = "";
	char	strcmp_s6[] = "";
	printf("mine:\t\t->%d<-\n", ft_strcmp(strcmp_s5, strcmp_s6));
	printf("expected:\t->%d<-\n", strcmp(strcmp_s5, strcmp_s6));

	printf("\n### strncmp tests ###\n");
	char	strncmp_s1[] = "bonjour les amis";
	char	strncmp_s2[] = "bonjour les potes";
	size_t	strncmp_n = 14;
	printf("mine:\t\t->%d<-\n", ft_strncmp(strncmp_s1, strncmp_s2, strncmp_n));
	printf("expected:\t->%d<-\n", strncmp(strncmp_s1, strncmp_s2, strncmp_n));
	char	strncmp_s3[] = "bonjour les amis";
	char	strncmp_s4[] = "bonjour les potes";
	size_t	strncmp_n2 = 7;
	printf("mine:\t\t->%d<-\n", ft_strncmp(strncmp_s3, strncmp_s4, strncmp_n2));
	printf("expected:\t->%d<-\n", strncmp(strncmp_s3, strncmp_s4, strncmp_n2));
	char	strncmp_s5[] = "bonjour les amis";
	char	strncmp_s6[] = "bonjour les potes";
	size_t	strncmp_n3 = 0;
	printf("mine:\t\t->%d<-\n", ft_strncmp(strncmp_s5, strncmp_s6, strncmp_n3));
	printf("expected:\t->%d<-\n", strncmp(strncmp_s5, strncmp_s6, strncmp_n3));

	printf("\n### atoi tests ###\n");
	char	atoi_str[] = "+420";
	char	atoi_str2[] = "-420";
	char	atoi_str3[] = "        781250";
	char	atoi_str4[] = "        781V250";
	printf("mine:\t\t->%d<-\n", ft_atoi(atoi_str));
	printf("expected:\t->%d<-\n", atoi(atoi_str));
	printf("mine:\t\t->%d<-\n", ft_atoi(atoi_str2));
	printf("expected:\t->%d<-\n", atoi(atoi_str2));
	printf("mine:\t\t->%d<-\n", ft_atoi(atoi_str3));
	printf("expected:\t->%d<-\n", atoi(atoi_str3));
	printf("mine:\t\t->%d<-\n", ft_atoi(atoi_str4));
	printf("expected:\t->%d<-\n", atoi(atoi_str4));

	printf("\n### isdigit tests ###\n");
	printf("mine:\t\t->%d<-\n", ft_isdigit('5'));
	printf("expected:\t->%d<-\n", isdigit('5'));
	printf("mine:\t\t->%d<-\n", ft_isdigit('z'));
	printf("expected:\t->%d<-\n", isdigit('z'));
	printf("mine:\t\t->%d<-\n", ft_isdigit('#'));
	printf("expected:\t->%d<-\n", isdigit('#'));
	printf("mine:\t\t->%d<-\n", ft_isdigit(129));
	printf("expected:\t->%d<-\n", isdigit(129));

	printf("\n### isalpha tests ###\n");
	printf("mine:\t\t->%d<-\n", ft_isalpha('5'));
	printf("expected:\t->%d<-\n", isalpha('5'));
	printf("mine:\t\t->%d<-\n", ft_isalpha('z'));
	printf("expected:\t->%d<-\n", isalpha('z'));
	printf("mine:\t\t->%d<-\n", ft_isalpha('#'));
	printf("expected:\t->%d<-\n", isalpha('#'));
	printf("mine:\t\t->%d<-\n", ft_isalpha(129));
	printf("expected:\t->%d<-\n", isalpha(129));

	printf("\n### isalnum tests ###\n");
	printf("mine:\t\t->%d<-\n", ft_isalnum('5'));
	printf("expected:\t->%d<-\n", isalnum('5'));
	printf("mine:\t\t->%d<-\n", ft_isalnum('z'));
	printf("expected:\t->%d<-\n", isalnum('z'));
	printf("mine:\t\t->%d<-\n", ft_isalnum('#'));
	printf("expected:\t->%d<-\n", isalnum('#'));
	printf("mine:\t\t->%d<-\n", ft_isalnum(129));
	printf("expected:\t->%d<-\n", isalnum(129));

	printf("\n### isascii tests ###\n");
	printf("mine:\t\t->%d<-\n", ft_isascii('5'));
	printf("expected:\t->%d<-\n", isascii('5'));
	printf("mine:\t\t->%d<-\n", ft_isascii('z'));
	printf("expected:\t->%d<-\n", isascii('z'));
	printf("mine:\t\t->%d<-\n", ft_isascii('#'));
	printf("expected:\t->%d<-\n", isascii('#'));
	printf("mine:\t\t->%d<-\n", ft_isascii(129));
	printf("expected:\t->%d<-\n", isascii(129));

	printf("\n### isprint tests ###\n");
	printf("mine:\t\t->%d<-\n", ft_isprint('5'));
	printf("expected:\t->%d<-\n", isprint('5'));
	printf("mine:\t\t->%d<-\n", ft_isprint('z'));
	printf("expected:\t->%d<-\n", isprint('z'));
	printf("mine:\t\t->%d<-\n", ft_isprint(13));
	printf("expected:\t->%d<-\n", isprint(13));
	printf("mine:\t\t->%d<-\n", ft_isprint(129));
	printf("expected:\t->%d<-\n", isprint(129));

	printf("\n### toupper tests ###\n");
	printf("mine:\t\t->%c<-\n", ft_toupper('a'));
	printf("expected:\t->%c<-\n", toupper('a'));
	printf("mine:\t\t->%c<-\n", ft_toupper('A'));
	printf("expected:\t->%c<-\n", toupper('A'));
	printf("mine:\t\t->%c<-\n", ft_toupper('#'));
	printf("expected:\t->%c<-\n", toupper('#'));

	printf("\n### tolower tests ###\n");
	printf("mine:\t\t->%c<-\n", ft_tolower('a'));
	printf("expected:\t->%c<-\n", tolower('a'));
	printf("mine:\t\t->%c<-\n", ft_tolower('A'));
	printf("expected:\t->%c<-\n", tolower('A'));
	printf("mine:\t\t->%c<-\n", ft_tolower('#'));
	printf("expected:\t->%c<-\n", tolower('#'));


	printf("\n\n### second part of the libft project ###\n");
	printf("\n### strtrim tests ###\n");
	char	strtrim_s[] = "        bonjour   les amis \n    \t";
	printf("mine:\t\t->%s<-\n", ft_strtrim(strtrim_s));
	printf("expected:\t->bonjour   les amis<-\n");

	printf("\n### strsplit tests ###\n");
	char	strsplit_s[] = "   bonjour       les  amis  d  lalala 1 2 3 soleil ";
	char	strsplit_c = ' ';
	ft_strsplit(strsplit_s, strsplit_c);
	return 0;
}

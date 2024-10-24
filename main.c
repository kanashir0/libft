/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login <login@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:26:08 by login             #+#    #+#             */
/*   Updated: 2024/10/20 10:26:11 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	r_int;
	size_t	r_size_t;
	char	r_char;

	r_int = ft_isalpha('A');
	printf("ft_isalpha: %d\n", r_int);

	r_int = ft_isdigit('5');
	printf("ft_isdigit: %d\n", r_int);

	r_int = ft_isalnum('~');
	printf("ft_isalnum: %d\n", r_int);

	r_int = ft_isascii(150);
	printf("ft_isascii: %d\n", r_int);

	r_int = ft_isprint('G');
	printf("ft_isprint: %d\n", r_int);

	const char *strlen = "cinco";
	r_size_t = ft_strlen(strlen);
	printf("ft_strlen: %ld\n", r_size_t);

	r_char = ft_toupper('w');
	printf("ft_toupper(w): %c\n", r_char);
	r_char = ft_toupper('F');
	printf("ft_toupper(F): %c\n", r_char);
	
	r_char = ft_tolower('G');
	printf("ft_tolower(G): %c\n", r_char);
	r_char = ft_tolower('f');
	printf("ft_tolower(f): %c\n", r_char);

	const char *strchr = "o rato roeu a roupa do rei de roma";
	strchr = ft_strchr(strchr, 'r');
	printf("ft_strchr: %s\n", strchr);

	const char *strrchr = "o rato roeu a roupa do rei de roma";
	strrchr = ft_strrchr(strrchr, 'r');
	printf("ft_strrchr: %s\n", strrchr);

	const char *strncmp_s1 = "carro";
	const char *strncmp_s2 = "carrao";
	size_t	strncmp_n = 5;
	r_int = ft_strncmp(strncmp_s1, strncmp_s2, strncmp_n);
	printf("ft_strncmp: %d\n", r_int);

	char memset_buf[20];
	char *memset_r;
	size_t	memset_n = 5;
	memset_r = ft_memset(memset_buf, '#', memset_n);
	printf("ft_memset: %s\n", memset_r);

	char bzero_buf[5] = "1111\0";
	size_t bzero_n = 2;
	ft_bzero(bzero_buf, bzero_n);
	printf("ft_bzero: %s\n", bzero_buf);

	char memcpy_dest[] = "11111111";
	const char *memcpy_src = "0000";
	char *memcpy_r;
	size_t memcpy_n = 3;
	memcpy_r = ft_memcpy(memcpy_dest, memcpy_src, memcpy_n);
	printf("ft_memcpy: %s\n", memcpy_r);

	char memmove_dest[] = "11111111";
	const char *memmove_src = "0000";
	char *memmove_r;
	size_t memmove_n = 3;
	memmove_r = ft_memmove(memmove_dest, memmove_src, memmove_n);
	printf("ft_memmove: %s\n", memmove_r);

	char strlcpy_dest[20];
	const char *strlcpy_src = "copied";
	r_size_t = ft_strlcpy(strlcpy_dest, strlcpy_src, sizeof(strlcpy_src));
	printf("ft_strlcpy: %s, size: %lu\n", strlcpy_dest, r_size_t);

	char strlcat_dest[8] = "content\0";
	const char *strlcat_src = "copied";
	r_size_t = ft_strlcat(strlcat_dest, strlcat_src, (sizeof(strlcat_src) + sizeof(strlcat_dest) +1));
	printf("ft_strlcat: %s, size: %lu\n", strlcat_dest, r_size_t);

	char *memchr_s = "i have a secret";
	size_t memchr_n = 15;
	memchr_s = ft_memchr(memchr_s, 's', memchr_n);
	printf("ft_memchr: %s\n", memchr_s);

	char *memcmp_s1 = "we are not the same";
	char *memcmp_s2 = "we are the same";
	size_t memcmp_n = 15;
	r_int = ft_memcmp(memcmp_s1, memcmp_s2, memcmp_n);
	printf("ft_memcmp: %d\n", r_int);

	char *strnstr_s1 = "we are not the same";
	char *strnstr_s2 = "not";
	size_t strnstr_len = 50;
	strnstr_s1 = ft_strnstr(strnstr_s1, strnstr_s2, strnstr_len);
	printf("ft_strnstr: %s\n", strnstr_s1);

	const char *atoi_s = "-675ab";
	r_int = ft_atoi(atoi_s);
	printf("ft_atoi: %d\n", r_int);
	
	char *calloc_arr;
	size_t calloc_size = 0;
	calloc_arr = (char *) ft_calloc(5, 1);
	while (calloc_size < 5)
	{
		calloc_arr[calloc_size] = 'F';
		calloc_size++;
	}
	printf("ft_calloc: %s\n", calloc_arr);
	free(calloc_arr);

	char *strdup_s = "copy me";
	char *strdup_r;
	strdup_r = ft_strdup(strdup_s);
	printf("ft_strdup: %s\n", strdup_r);
	free(strdup_r);

	const char *substr_s = "meu nome eh getulio";
	char *substr_r;
	substr_r = ft_substr(substr_s, 4, 4);
	printf("ft_substr: %s\n", substr_r);
	free(substr_r);

	const char *strjoin_s1 = "combining ";
	const char *strjoin_s2 = "powers";
	char *strjoin_r;
	strjoin_r = ft_strjoin(strjoin_s1, strjoin_s2);
	printf("ft_strjoin: %s\n", strjoin_r);
	free(strjoin_r);

	char const *strtrim_s = "||estou o/ livre||";
	char const *strtrim_set = "||";
	char *strtrim_r;
	strtrim_r = ft_strtrim(strtrim_s, strtrim_set);
	printf("ft_strtrim: %s\n", strtrim_r);
	free(strtrim_r);

	return (0);
}

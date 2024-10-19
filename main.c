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

	return (0);
}

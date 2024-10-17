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

	const char *str_len = "cinco";
	r_size_t = ft_strlen(str_len);
	printf("ft_strlen: %ld\n", r_size_t);

	r_char = ft_toupper('w');
	printf("ft_toupper(w): %c\n", r_char);
	r_char = ft_toupper('F');
	printf("ft_toupper(F): %c\n", r_char);
	
	r_char = ft_tolower('G');
	printf("ft_tolower(G): %c\n", r_char);
	r_char = ft_tolower('f');
	printf("ft_tolower(f): %c\n", r_char);

	return (0);
}

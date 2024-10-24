/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:27:55 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/21 20:30:04 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	char	*sub;
	size_t	src_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	src = (char *)s + start;
	src_len = ft_strlen(src);
	if (src_len < len)
		len = src_len;
	sub = (char *) malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = src[i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *substr_s = "meu nome eh getulio";
	char *substr_r;
	substr_r = ft_substr(substr_s, 4, 4);
	printf("ft_substr: %s\n", substr_r);
	return (0);
}*/

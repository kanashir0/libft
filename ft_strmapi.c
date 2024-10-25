/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:00:50 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/24 19:01:03 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*res;

	len = ft_strlen(s);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL || s == NULL || f == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
char	ft_up(unsigned int i, char c)
{
	return (c + i);
}

#include <stdio.h>
int	main(void)
{
	char *str = "aaaaaa";
	str = ft_strmapi(str, &ft_up);
	printf("%s\n", str);
	return (0);
}*/

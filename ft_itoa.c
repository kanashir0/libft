/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login <login@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:38:12 by login             #+#    #+#             */
/*   Updated: 2024/10/24 12:42:34 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	ft_get_next_char(int *n)
{
	char	c;

	c = '0';
	if (*n == 0)
		return (c);
	if (*n != 0)
	{
		c = (ft_abs(*n) % 10) + '0';
		*n = *n / 10;
	}
	return (c);
}

int	ft_get_num_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;

	len = ft_get_num_len(n);
	res = (char *)malloc((len + 1) * sizeof(char));
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	len--;
	while (len >= 0 && n != 0)
	{
		res[len] = ft_get_next_char(&n);
		len--;
	}
	if (len == 1)
		res[0] = '-';
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	int		num = -400;

	str = ft_itoa(num);
	printf("num: %s\n", str);
	return (0);
}*/

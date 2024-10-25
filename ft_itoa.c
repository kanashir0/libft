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

long	ft_abs(long num)
{
	if (num < 0)
		return (-num);
	return (num);
}

char	ft_get_next_char(long *num)
{
	char	c;

	c = '0';
	if (*num == 0)
		return (c);
	if (*num != 0)
	{
		c = (ft_abs(*num) % 10) + '0';
		*num = *num / 10;
	}
	return (c);
}

int	ft_get_num_len(long num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	num;

	num = n;
	len = ft_get_num_len(num);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	if (num < 0)
		res[0] = '-';
	if (num == 0)
		res[0] = '0';
	len--;
	while (len >= 0 && num != 0)
	{
		res[len] = ft_get_next_char(&num);
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
	int		num = -2147483648LL;

	str = ft_itoa(num);
	printf("num: %s\n", str);
	return (0);
}*/

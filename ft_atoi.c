/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login <login@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:25:49 by login             #+#    #+#             */
/*   Updated: 2024/10/25 18:08:11 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_set_signal(char *n, int *negative)
{
	while ((*n >= 9 && *n <= 13) || *n == ' ')
		n++;
	if (*n == '+')
	{
		n++;
		return (n);
	}
	if (*n == '-')
	{
		*negative *= -1;
		n++;
	}
	return (n);
}

int	ft_atoi(const char *nptr)
{
	int		negative;
	int		result;
	char	*n;

	negative = 1;
	n = (char *) nptr;
	result = 0;
	n = ft_set_signal(n, &negative);
	while (*n)
	{
		if (*n >= '0' && *n <= '9')
			result = (result * 10) + (*n - '0');
		else
			return (result * negative);
		n++;
	}
	return (result * negative);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *str = "\t\n\r\v\f  469 \n";
	int	i;

	i = ft_atoi(str);
	printf("%d\n", i);
	return (0);
}*/

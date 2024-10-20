/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login <login@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 15:25:49 by login             #+#    #+#             */
/*   Updated: 2024/10/20 15:33:33 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		negative;
	int		result;
	char	*n;

	negative = 1;
	n = (char *) nptr;
	result = 0;
	if (*n == '-')
	{
		negative *= -1;
		n++;
	}
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

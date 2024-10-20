/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login <login@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:26:09 by login             #+#    #+#             */
/*   Updated: 2024/10/20 14:26:23 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n) {
		if (((unsigned char *) s)[i] == (unsigned char) c)
			return (&((unsigned char *) s)[i]);
		i++;
	}
	return (NULL);
}

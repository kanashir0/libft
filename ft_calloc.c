/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:28:47 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/28 17:32:03 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*arr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (INT_MAX / size < nmemb)
		return (NULL);
	total = nmemb * size;
	arr = malloc(total);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, total);
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login <login@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:43:28 by login             #+#    #+#             */
/*   Updated: 2024/10/23 11:01:21 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	to_trim(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	first;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	first = 0;
	while (to_trim(s1[first], set))
		first++;
	s1_len = ft_strlen(s1);
	if (first == s1_len)
		return (ft_strdup(""));
	while (to_trim(s1[s1_len - 1], set))
		s1_len--;
	return (ft_substr(s1, first, s1_len - first));
}

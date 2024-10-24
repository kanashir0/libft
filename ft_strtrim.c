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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	set_len;
	size_t	s1_len;
	size_t	res_len;
	char	*result;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	set_len = ft_strlen(set);
	if (ft_strncmp(s1, set, set_len) == 0)
		s1 += set_len;
	s1_len = ft_strlen(s1);
	result = (char *) malloc((s1_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result = ft_strdup(s1);
	res_len = ft_strlen(result);
	if (ft_strncmp(&s1[s1_len - set_len], set, set_len) == 0)
		result[res_len - set_len] = '\0';
	return (result);
}

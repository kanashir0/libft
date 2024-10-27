/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:12:04 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/27 10:34:18 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char const	*ft_get_next_word(
	char **arr, char const *s, char c, int len)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
		i++;
	arr[i] = (char *)malloc((len + 1) * sizeof(char));
	if (arr[i] == NULL)
		return (ft_free_arr(arr));
	while (*s && *s == c)
		s++;
	j = 0;
	while (*s && *s != c)
	{
		arr[i][j] = *s;
		s++;
		j++;
	}
	arr[i][j] = '\0';
	return (s);
}

static int	ft_get_next_len(char const *s, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static int	ft_count_word(char const *s, char c)
{
	int	wc;
	int	i;

	wc = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			wc += 1;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		arr_size;
	int		len;

	if (s == NULL)
		return (NULL);
	arr_size = ft_count_word(s, c);
	arr = (char **) malloc((arr_size + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	while (*s)
	{
		len = ft_get_next_len(s, c);
		s = ft_get_next_word(arr, s, c, len);
	}
	arr[arr_size] = NULL;
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	long unsigned int	i;
	char **arr;
	char const *str = "hello!";
	arr = ft_split(str, ' ');
	i = 0;
	while (arr[i] != NULL)
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return (0);
}*/

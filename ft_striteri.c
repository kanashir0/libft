/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:18:10 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/25 16:28:18 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
	return ;
}
/*
void	ft_up(unsigned int i, char *c)
{
	*c = (*c) + i;
	return ;
}

#include <stdio.h>
int	main(void)
{
	char *str = "aaaaa";
	ft_striteri(str, &ft_up);
	printf("%s\n", str);
	return (0);
}*/

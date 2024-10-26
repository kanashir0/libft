/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:50:17 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/26 16:02:46 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
	return ;
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "nova";
	char *str2 = "new";
	t_list	*lst = ft_lstnew(str);
	t_list	*new = ft_lstnew(str2);
	ft_lstadd_front(&lst, new);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
	return (0);
}*/

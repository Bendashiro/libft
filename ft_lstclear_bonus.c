/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:57:04 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/13 14:42:18 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	if (!lst || !del)
		return ;
	if (!*lst)
		return ;
	while (*lst)
	{
		temp = *lst;
		ft_lstdelone(*lst, (del));
		*lst = temp->next;
	}
	*lst = NULL;
	return ;
}

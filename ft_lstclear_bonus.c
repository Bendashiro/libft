/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:57:04 by hibenfet          #+#    #+#             */
/*   Updated: 2019/12/09 17:06:02 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (*lst)
	{
		*lst = temp->next;
		ft_lstdelone(temp, (del));
		temp = *lst;
	}
	*lst = NULL;
	return ;
}

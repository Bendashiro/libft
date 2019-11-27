/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:57:04 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/27 19:56:40 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	t_list *temp1;

	if (!lst || !del)
		return ;
	temp1 = *lst;
	while (*lst)
	{
		temp = temp1->next;
		ft_lstdelone(temp1, (del));
		temp1 = temp;
	}
	*lst = NULL;
	return ;
}

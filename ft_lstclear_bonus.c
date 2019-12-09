/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:57:04 by hibenfet          #+#    #+#             */
/*   Updated: 2019/12/09 20:38:47 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;
	t_list *ptr;

	if (!lst || !del)
		return ;
	temp = NULL;
	ptr = *lst;
	while (ptr)
	{
		temp = ptr->next;
		ft_lstdelone(temp, (*del));
		ptr = temp;
	}
	*lst = NULL;
	return ;
}

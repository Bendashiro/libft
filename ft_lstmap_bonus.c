/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:44:52 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/13 17:48:40 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *temp;

	if (!lst || !del || !f)
		return (NULL);
	if (!(new = ft_lstnew((f)(lst->content))))
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		if (!(temp = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}

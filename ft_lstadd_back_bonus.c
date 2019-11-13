/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:13:28 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/13 17:08:45 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	if (*alst == NULL)
	{
		*alst = new;
		new->next = NULL;
		return ;
	}
	ft_lstlast(*alst)->next = new;
	return ;
}

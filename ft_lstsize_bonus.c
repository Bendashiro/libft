/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:53:14 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/13 14:47:48 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int size;

	size = 0;
	if (lst != NULL)
		while (lst != NULL)
		{
			size++;
			lst = lst->next;
		}
	return (size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:32:28 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/04 15:57:26 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void       *ft_calloc(size_t count, size_t size)
{
	void *str;

	if (!(str = (void*)malloc(count * size)))
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
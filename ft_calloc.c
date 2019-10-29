/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:32:28 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/28 21:47:59 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void       *ft_calloc(size_t count, size_t size)
{
	void *str;
	
	if(!(str = malloc(count * size)))
		return (NULL);
	return (str);
}
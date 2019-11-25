/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:04:48 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/25 13:50:11 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
		return (dst);
	}
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
		return (d);
	}
	return (0);
}

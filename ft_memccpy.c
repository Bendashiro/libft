/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:56:07 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/30 06:24:38 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst , const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t i;
	
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	while (n--)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}
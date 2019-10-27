/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:56:07 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/27 22:58:31 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst , const void *src, int c, size_t n)
{
	char *d;
	const char *s;
	
	d = (char)dst;
	s = (const char)src;
	
	while (*s && n-- && *s != (unsigned char)c)
		*d++ = *s++;
	return (NULL);
}
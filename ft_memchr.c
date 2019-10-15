/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:34:42 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/15 13:51:42 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	const char *str;

	str = s;
	while (*str++ != '\0' && n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
	}
	return (NULL);
}
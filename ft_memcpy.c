/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:48:51 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/14 15:27:58 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = (char)dst;
	s = (const char)src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

int main(void)
{
	char *dst = "rien";
	char *src = "42";
	printf("ft_memcpy: %s\n", ft_memcpy(dst, src, 5));
	printf("memcpy: %s\n", memcpy(dst, src, 5));
}
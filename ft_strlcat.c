/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:21:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/27 22:45:13 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	int dstlen;
	int srclen;

	i = 0;
	j = 0;
	
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	while (src[i] != '\0' && i <= (size - dstlen - 1))
	{
		while (dst[j++] != '\0')
		;
		j--;
		while (src[i] != '\0')
			dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}

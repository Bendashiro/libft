/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:21:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/28 13:14:01 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int tot;

	if (!dst && size == 0 && *src)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	tot = 0;
	while (dst[j] && j < size)
		j++;
	while (src[i])
		i++;
	tot = i + j;
	if (size == i)
		return (tot);
	i = 0;
	while (src[i] && j + i < size - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j] = '\0';
	return (tot);
}

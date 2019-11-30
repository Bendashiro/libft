/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:21:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/29 15:48:44 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int tot;

	if ((!dst && !src) || size == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	tot = 0;
	while (dst[j] && j < size)
		j++;
	while (src[i])
		i++;
	tot = i + j;
	if (size == j)
		return (tot);
	i = 0;
	while (src[i] && j + i < size - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (tot);
}

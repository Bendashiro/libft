/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:31:32 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/21 21:50:58 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	int lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	if (!*dst)
		return (0);
	while (src != '\0' && i <= (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	printf("%s\n", dst);
	return (lensrc);
}

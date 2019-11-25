/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:21:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/25 17:24:55 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
/*{
	unsigned int	i;
	unsigned int	j;
	size_t			dstlen;
	size_t			srclen;

	i = 0;
	j = 0;
	dstlen = ft_strnlen(dst, size);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (srclen + size);
	while (src[i] && (dstlen + i) < (size - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	printf("str concat : %s\n", dst);
	return (dstlen + srclen);
}*/
{
	unsigned int i;
	unsigned int j;
	//unsigned int tot;
	size_t dstlen;


	if (!src || (!dst && size != 0))
		return (0);
	if (!dst && size == 0)
		return (ft_strlen(src));
	dstlen = ft_strlen(dst);
	i = 0;
	j = 0;
	while (dst[j])
		j++;
	while (src[i] && i < size - 1)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	printf("concat impli == %s\n", dst);
	return (j);
}

int		main(void)
{
	char dst[20] = "je m appele";
	char *src = "NULL555";
	char *dst1 = "je m appele";
	char *src1 = "NULL555";
	printf("%zu\n", ft_strlcat(dst, src, 5));
	//printf("dest vaut %s\n", dst);
	printf("%zu\n", strlcat(dst1, src1, 5));
	//printf("dest vaut %s\n", dst1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:21:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/26 11:38:35 by hibenfet         ###   ########.fr       */
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
	unsigned int tot;


	/*if (!src || (!dst && size != 0))
		return (0);*/
	if (!dst && size == 0 && *src)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	while (dst[j] && j < size)
	{
		printf("j == %d < size : %zu\n", j, size);
		j++;
	}
	while (src[i])
	{
		printf("src[i] == %c pour i == %d\n", src[i], i);
		i++;
	}
	tot = i + j;
	printf("tot == %d\n", tot);
	/*if (size == i)
		return (tot);*/
	i = 0;
	while (src[i] && j + i < size - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j] = '\0';
	printf("concat impli == %s\n", dst);
	return (tot);
}

int		main(void)
{
	char dst[20] = "NULLfdf";
	char *src = "NULL5fsadf";
	char dst1[20] = "NULLfdf";
	char *src1 = "NULL5fsadf";
	printf("%zu\n", ft_strlcat(dst, src, 20));
	//printf("dest vaut %s\n", dst);
	printf("%zu\n", strlcat(dst1, src1, 20));
	//printf("dest vaut %s\n", dst1);
}
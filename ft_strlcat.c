/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:21:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/27 21:46:30 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int tot;


	/*if (!src || (!dst && size != 0))
		return (0);*/
	if (!dst && size == 0 && *src)
		return (ft_strlen(src));
	printf("result strlcat == %lu\n", strlcat(dst, src, size));
	printf("dst == :%s;\n", dst);
	printf("src == :%s;\n", src);
	printf("size == :%zu;\n", size);
	i = 0;
	j = 0;
	while (dst[j] && j < size)
		j++;
	while (src[i])
		i++;
	tot = i + j;
	/*if (size == i)
		return (tot);*/
	i = 0;
	while (src[i] && j + i < size - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j] = '\0';
	// printf("concat impli == %s\n", dst);
	// printf("result ft_strlcat == %u\n", tot);
	return (tot);
}

int		main(void)
{
	// char dst[40] = "thx";
	// char *src = "thx to ntoniolo for this test !";
	// int size = 0;
	char dst[50] = "here is no stars in the skythe cake is a lie ";
	char *src = "the cake is a lie !";
	int size = 47;
	// char dst[40] = "there is no stars in the sky";
	// char *src = "sdfgsdg";
	// int size = 0;
	char *dst1 = dst;
	char *src1 = src;
	printf("%zu\n", ft_strlcat(dst, src, size));
	//printf("dest vaut %s\n", dst);
	printf("%zu\n", strlcat(dst1, src1, size));
	//printf("dest vaut %s\n", dst1);
}
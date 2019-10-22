/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:21:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/21 21:53:47 by hibenfet         ###   ########.fr       */
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
		printf("avant j vaut %zu\n", j);
		while (dst[j++] != '\0')
		;
		j--;
		printf("ici j vaut %zu\n", j);
		while (src[i] != '\0')
		{
			dst[j] = src[i];
			printf("on ecrit dans dst[%zu] : %c == %c\n", j, src[i], dst[j]);

			printf("incrementation de i %zu\n", i);
			i++;
			j++;
		}
	}
	dst[j] = '\0';
	printf("concatenation: %s\n", dst);
	return (dstlen + srclen);
}

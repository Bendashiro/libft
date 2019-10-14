/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:21:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/14 15:29:09 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (src[i] != '\0' && i <= (size - ft_strlen(dst) - 1))
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
	return (j);
}

int		main(void)
{
	char dst[30] = "je suis";
	char *src = "a manger";
	char dst1[30] = "je suis";
	char *src1 = "a manger";
	int  s = 5;
	int rep = ft_strlcat(dst, src, s);
	int rep2 = strlcat(dst1, src1, s);
	printf("ft_strlcat : %d\n", rep);
	printf("strlcat : %d\n", rep2);
}
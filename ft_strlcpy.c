/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:31:32 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/14 15:25:27 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (!*dst)
		return (0);
	while (src != '\0' && i <= (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	printf("%s\n", dst);
	return (i);
}

int		main(void)
{
	char dst[30] = "je suis";
	char *src = "a manger";
	int  s = 10;
	int rep = ft_strlcpy(dst, src, s);
	int rep2 = strlcpy(dst, src, s);
	printf("ft_strlcpy : %d\n", rep);
	printf("strlcpy : %d\n", rep2);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:55:13 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/04 15:11:36 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;
	size_t i;

	i = 0;
	ptr = (unsigned char *)b;
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
/*
int		main(void)
{
	char *str = "bonjour";
	char c = 'A';
	int len = 3;
	printf("%s", ft_memset(str, c, len));
}*/
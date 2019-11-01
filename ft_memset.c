/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:55:13 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/01 22:32:06 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char *)b;
	while(len-- > 0)
	{
		*ptr++ = (unsigned char)c;
		//len--;
	}
	return (ptr);
}

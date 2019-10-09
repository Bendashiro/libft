/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:55:13 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/09 15:22:01 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *ft_memset(void *b, int c, size_t len)
{
	while(len-- > 0)
	{
		*(unsigned char*)b = (unsigned char)c;
	}
}
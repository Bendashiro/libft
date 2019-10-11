/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:56:07 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/11 19:08:03 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memccpy(void *dst , const void *src, int c, size_t n)
{
	char *d;
	const char *s;
	
	d = dst;
	s = src;
	while (n--)
}
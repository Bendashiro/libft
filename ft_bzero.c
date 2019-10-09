/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:14:22 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/09 15:21:46 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		*(unsigned char*)s = '0';
}
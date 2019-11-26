/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 19:47:41 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/26 12:20:54 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strnlen(const char *str, size_t n)
{
	size_t i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && i < n)
	{
		i++;
	}
	return (i);
}

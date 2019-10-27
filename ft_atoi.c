/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:38:24 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/27 12:22:28 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int minus;
	int rep;

	i = 0;
	rep = 0;
	minus = 1;
	if (str[i] == ' ')
	{
		while (str[i] == ' ')
			i++;
	}
	if ((str[i] == '+' || str[i] == '-') &&
	(str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		str[i] == '-' ? minus = minus * (-1) : minus;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rep = rep * 10 + str[i] - '0';
		/**
		 * rep + 0 = rep * 10 + str[i]
		 * rep + 0 - rep * 10 = str[i]
		 * str[i] = n + 0 - n * 10
		*/
		i++;
	}
	rep = rep * minus;
	return (rep);
}

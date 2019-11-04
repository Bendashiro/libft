/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:38:24 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/04 14:42:09 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					i;
	int					minus;
	unsigned long long	rep;

	i = 0;
	rep = 0;
	minus = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
	str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
		i++;
	if ((str[i] == '+' || str[i] == '-') &&
	(str[i + 1] >= '0' && str[i + 1] <= '9'))
		str[i++] == '-' ? minus = minus * (-1) : minus;
	while (str[i] >= '0' && str[i] <= '9')
		rep = rep * 10 + str[i++] - '0';
	if (rep > 9223372036854775807)
		return (minus == 1 ? -1 : 0);
	rep = rep * minus;
	return ((int)rep);
}

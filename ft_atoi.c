/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 10:38:24 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/27 16:55:33 by hibenfet         ###   ########.fr       */
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
	if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' ||
	str[i] == '\r' || str[i] == '\f')
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
		str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
			i++;
	if ((str[i] == '+' || str[i] == '-') &&
	(str[i + 1] >= '0' && str[i + 1] <= '9'))
		str[i++] == '-' ? minus = minus * (-1) : minus;
	while (str[i] >= '0' && str[i] <= '9')
		rep = rep * 10 + str[i++] - '0';
	rep = rep * minus;
	return (rep);
}
/*
int		main(void)
{
	char	*str;
	int		rep;
	int		rep2;

	str = "9223372036854775807";
	rep = ft_atoi(str);
	rep2 = atoi(str);
	printf("ft_atoi: %d\n", rep);
	printf("atoi: %d\n", rep2);
}
*/
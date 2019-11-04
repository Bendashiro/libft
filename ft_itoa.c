/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:45:35 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/04 16:58:57 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ndigit(int n)
{
	int count;

	count = 0;
	if (n == 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char			*ft_itoa_disgusting_hack(int nu, int len)
{
	char	*str;
	int		i;
	long	n;

	n = (long)nu;
	if (!(str = malloc(sizeof(char) * len + (n < 0 ? 2 : 1))))
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n == 0)
		str[0] = '0';
	i = len - 1;
	while (i >= 0)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	if (str[0] == '0' && len > 1)
		str[0] = '-';
	str[len] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ndigit(n);
	str = ft_itoa_disgusting_hack(n, len);
	return (str);
}

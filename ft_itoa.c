/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:45:35 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/26 17:23:49 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ndigit(int n)
{
	int count;

	count = 0;
	while (n != 0)
		{
			printf("n : %d\n", n);
			n /= 10;
			count++;
			printf("n/10 : %d et count : %d\n", n, count);
		}
	printf("digit : %d\n", count);
	return (count);
}

char *ft_itoa(int n)
{
	int		len;
	char	*str;
	int		i;

	len = ndigit(n);
	if (!(str = malloc(sizeof(char) * len + (n >= 0 ? 1 : 2))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		len++;
	}
	while (len > 0)
	return (str);
}

int		main(void)
{
	int n;
	char *str;

	n = -876542;
	str = ft_itoa(n);
	printf("%s\n", str);
}
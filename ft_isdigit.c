/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:47:35 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/29 00:41:35 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


int main(void)
{
	int c;
	int rep;
	int rep2;

	c = 48;
	rep = ft_isdigit(c);
	rep2 = isdigit(c);
	printf("rep = %d\n", rep);
	printf("rep2 = %d\n", rep2);
}
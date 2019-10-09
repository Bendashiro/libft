/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:59:22 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/09 17:23:22 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c)
{
	if (((unsigned char)c >= 'a' && (unsigned char)c <= 'z') ||
	((unsigned char)c >= 'A' && (unsigned char)c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	int c = 153;
	int rep = ft_isalpha(c);
	int rep2 = isalpha(c);
	printf("ft_isalpha: %d\n", rep);
	printf("isalpha: %d\n", rep2);
}*/
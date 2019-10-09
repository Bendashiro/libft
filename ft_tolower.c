/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:37:35 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/09 17:54:09 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_tolower(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (c += 32)
}

int main(void)
{
	int c = 48;
	//int rep = ft_tolower(c);
	int rep2 = tolower(c);
	//printf("ft_isalpha: %d\n", rep);
	printf("isalpha: %d\n", rep2);
}
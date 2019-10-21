/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:09:54 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/21 21:35:07 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	len = ft_strlen(s) - 1;
	str = (char*)s;
	printf("%c\n", str[len]);
	while (str[len])
	{
		if (str[len] == (unsigned char)c)
			return (&str[len]);
		len--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:09:54 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/28 11:49:48 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;

	len = ft_strlen(s) - 1;
	str = (char*)s;
	if (c == '\0')
		return (&str[len + 1]);
	while (str[len] && len >= 0)
	{
		if (str[len] == (unsigned char)c)
			return (&str[len]);
		len--;
	}
	return (NULL);
}

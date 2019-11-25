/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:32:05 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/25 12:56:03 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strchr locates the first occurence of c
** converted to char in the string pointed by
** s and return s pointer to the located character
** or NULL if not finded.
*/

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		len;

	len = ft_strlen(s);
	str = (char*)s;
	i = 0;
	if (!s)
		return (NULL);
	if (c == '\0')
		return (&str[len]);
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

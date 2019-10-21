/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:32:05 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/21 19:04:17 by hibenfet         ###   ########.fr       */
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
	char *str;

	str = (char*)s;
	while (*str++ != '\0')
	{
		if (*str == (unsigned char)c)
			return (str);
	}
	return (NULL);
}

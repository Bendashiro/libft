/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:37:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/14 14:18:08 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*meule;
	char	*aiguille;
	size_t	i;
	size_t	j;

	meule = (char*)haystack;
	aiguille = (char*)needle;
	if (!*aiguille)
		return (meule);
	i = 0;
	while (meule[i] != '\0' && i < len)
	{
		j = 0;
		while (meule[i++] == aiguille[j++] && i <= len)
			if (aiguille[j] == '\0')
				return (&meule[i - j]);
	}
	return (NULL);
}

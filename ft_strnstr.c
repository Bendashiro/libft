/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:37:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/14 18:36:43 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*meule;
	char	*aiguille;
	int		i;
	int		j;

	meule = (char*)haystack;
	aiguille = (char*)needle;
	if (aiguille == '\0')
		return (meule);
	while (meule++ != '\0' && len-- > 0)
	{
		i = 0;
		j = 0;
		if (meule[i++] == aiguille[j++])
		{
			return (meule);
		}
	}
	return (NULL);
}

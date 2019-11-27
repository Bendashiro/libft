/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:37:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/27 19:53:30 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*meule;
	char	*aiguille;
	size_t	i;
	size_t	j;

	if (!needle || !haystack)
		return (NULL);
	meule = (char *)haystack;
	aiguille = (char *)needle;
	if (ft_strncmp(aiguille, "", ft_strlen(aiguille)) == 0)
		return (meule);
	i = 0;
	while (meule[i] != '\0' && i < len)
	{
		j = 0;
		while (meule[i + j] == aiguille[j] && (i + j) < len
		&& aiguille[j] != '\0')
			j++;
		if (aiguille[j] == '\0')
			return (&meule[i]);
		i++;
	}
	return (NULL);
}

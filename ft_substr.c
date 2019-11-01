/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:09:15 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/01 18:59:40 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Create a substring from the "start" with
** len lenght more than start
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (s == NULL)
		return (NULL);
	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = start;
	j = 0;
	while(i < start + len && s[i] != '\0')
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
	/*i = -1;
	j = 0;
	while (s[++i] != '\0')
		if (i >= start && (int)len-- > 0)
			str[j++] = s[i];
	str[j] = '\0';
	return (str);*/
}

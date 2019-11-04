/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:27:40 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/04 17:09:36 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concatenate both string in one
** Remarque, verifier si le cas en commentaire est un bug ou pas
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	len2;
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	if (!(str = malloc(sizeof(char) * (len + len2 + 1))))
		return (NULL);
	j = 0;
	while (s1[i])
		str[i++] = s1[j++];
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

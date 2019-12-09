/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:32:04 by hibenfet          #+#    #+#             */
/*   Updated: 2019/12/09 18:01:56 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Instruction a coder:
** - passer les charactere composant le char set;
** -> fonction annexe utilisation de static
** -> sauvegarder la position de l'index pour start substring
** -> retourner la string
** -> repeter l'operation
*/

#include "libft.h"

static	int	checkc(char s1, const char *set)
{
	unsigned int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(const char *s1, const char *set)
{
	char			*str;
	char			*start;
	char			*end;
	int				len;
	unsigned int	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	start = (char*)s1;
	len = ft_strlen(s1);
	end = (char*)s1 + len;
	while (checkc(*start, set))
	{
		start++;
		len--;
	}
	while (*start && checkc(*--end, set))
		len--;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (len-- > 0)
		str[i++] = *start++;
	str[i] = '\0';
	return (str);
}

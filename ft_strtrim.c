/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:32:04 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/18 22:33:44 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Instruction a coder:
 * - passer les charactere composant le char set;
 * -> fonction annexe utilisation de static
 * -> sauvegarder la position de l'index pour start substring
 * -> retourner la string
 * -> repeter l'operation
*/

#include "libft.h"

static	int		check(char const *s1, char const *set)
{
	while (*s1)
	{
		if (*s1++ == *set)
		{
			return (1);
		}
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int maxlen;
	int count;

	count = 0;
	maxlen = ft_strlen(s1);
	if (!(str = malloc(sizeof(char) * (maxlen + 1))))
		return (NULL);
	while (*s1)
	{
		if (*s1 == *set)
		{
			printf("charactere: s1 = %c set = %c\n", *s1, *set);
			printf("charactere: s1 = %s\n", s1);
		}
	}
	return (str);
}

int		main(void)
{
	const char *s1;
	const char *set;
	char *rep;

	s1 = "ahachahHichamhahaha";
	set = "ah";
	rep = ft_strtrim(s1, set);
	printf("strtrim: %s", rep);
}
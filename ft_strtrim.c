/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:32:04 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/29 07:12:17 by hibenfet         ###   ########.fr       */
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

static	int	checkc(char const s1, char const set)
{
	if (s1 == set)
		return (1);
	else
		return (0);
}

static	int	checks(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (checkc(s1[i], set[j]) == 1)
		{
			i++;
			j = 0;
		}
		else if (checkc(s1[i], set[j]) == 0 && set[j] != '\0')
			j++;
		else if (checkc(s1[i], set[i]) == 0 && set[j] == '\0')
			return (i);
	}
	return (i);
}

static	int	checksm(char const *s1, char const *set)
{
	int i;
	int j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (s1[i])
	{
		if (checkc(s1[i], set[j]) == 1)
		{
			i--;
			j = 0;
		}
		else if (checkc(s1[i], set[j]) == 0 && set[j] != '\0')
			j++;
		else if (checkc(s1[i], set[j]) == 0 && set[j] == '\0')
			return (i);
	}
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		len;

	start = checks(s1, set);
	end = checksm(s1, set);
	len = end - start + 1;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str = ft_substr(s1, start, len);
	return (str);
}

int		main(void)
{
	const char *s1;
	const char *set;
	char *rep;

	s1 = "  \t \t \n   \n\n\n\t";
	set = "";
	rep = ft_strtrim(s1, set);
	printf("%s", rep);
}
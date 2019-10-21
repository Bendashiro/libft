/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:32:04 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/21 20:33:20 by hibenfet         ###   ########.fr       */
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

static int checkC(char const s1, char const set)
{
	if (s1 == set)
	{
		return (1);
		printf("1 pour : %c et %c", s1, set);
	}
	else
	{
		return (0);
		printf("0 pour : %c et %c", s1, set);
	}
}

static int checkS(char const *s1, char const *set)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (checkC(s1[i], set[j]) == 1)
		{
			printf("check == 1 pour %c et %c\n", s1[i], *set);
			printf("%s\n", s1);
			i++;
			j = 0;
		}
		else if (checkC(s1[i], set[j]) == 0 && set[j] != '\0')
		{
			printf("check == 0 pour %c et %c\n", s1[i], set[j]);
			j++;
		}
		else if (checkC(s1[i], set[i]) == 0 && set[j] == '\0')
		{
			printf("fin CheckS\n");
			return (i);
			//printf("valeur de retour %c, %s", *str, str);
			//return (str);
		}
	}
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	int start;
	int len;
	
		
}

// xxxcoucouxxx
// 3

int main(void)
{
	char *s1;
	char *set;
	char *rep;

	s1 = ft_strdup("ahachahHichamhahaha");
	set = "ah";
	rep = ft_strtrim(s1, set);
	printf("strtrim: %s", rep);
}
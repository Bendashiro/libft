/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:32:05 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/11 18:41:35 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

/**
 * The strchr locates the first occurence of c
 * converted to char in the string pointed by
 * s and return s pointer to the located character
 * or NULL if not finded.
*/

char *ft_strchr(const char *s, int c)
{
	int i;
	char *rep;

	rep = NULL;
	i = 0;
	printf("est ce que mon programme fait quelque chose\n");
	while (s[i] != '\0')
	{
		printf("rentre dans la boucle principal\n");
		if (s[i] == (char)c)
		{
			printf("Found\n");
			*rep++ = *s++;
			return (rep);
		}
		else
		{
			i++;
			printf("incrementation de i: %d\n", i);
		}
	}
	return (NULL);
}

int		main(void)
{
	int c;
	char *str = "je m'appel Hicham";
	char *rep;
	char *rep2;
	
	c = 72;
	rep = ft_strchr(str, c);
	printf("ft_strchr: %s\n", rep);
	rep2 = strchr(str, c);
	printf("strchr: %s\n", rep2);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:43:40 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/26 21:57:28 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * Trouvez le premier char c;
 * Compter l'espacement jusqu'au prochain char c;
 * Renvoyer la len;
 * substring du start a la len;
 * 
 * 
*/

int		ft_word(const char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	printf("word: %d\n", count);
	return (count);	
}

int		ft_wordlen(const char *str, int i, char c)
{
	int len;

	len = 0;
	while (str[i] && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}
char	**ft_split(char const *s, char c)
{
	char **str;
	int i;
	int x;
	int len;
	int nb_word;

	i = 0;
	x = 0;
	nb_word = ft_word(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (nb_word + 1))))
		return (NULL);
	str[nb_word] = NULL;
	while (x < nb_word)
	{
		len = ft_wordlen(s, i, c);
		str[x] = ft_substr(s, i, len);
		i = i + len + 1;
		x++;
	}
	/*
	while (s[i] && c)
	{
		len = 0;
		while (s[i + len] != c && s[i + len])
		{
			printf("s[i + len] = %c pour len = %d\n", s[i + len], len);
			len++;
		}
		printf("Petite boucle fini : s[i + len] = %c pour len = %d\n", s[i + len], len);
		if (!(str[x] = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		printf("len = %d et i = %d\n", len, i);
		str[x] = ft_substr(s, len, i);
		//printf("AVstr: %s && char: %c pour i = %d\n",s, s[i], i); 
		i += len  + 1;
		x++;
	}*/
	return (str);
}

int		main(void)
{
	char **tab;
	char *str;
	char c;

	str = "  mmanfer6boire6death666";
	c = '6';
	tab = ft_split(str, c);
	for (int i = 0; tab[i] != NULL; ++i)
		printf("%s\n", tab[i]);
}

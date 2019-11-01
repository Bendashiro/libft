/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:43:40 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/01 18:42:05 by hibenfet         ###   ########.fr       */
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
char	**ft_free(char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i++])
		free(str[i]);
	free(str);
	return (str);
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
	{
		free(str);
		return (NULL);
	}	
	str[nb_word] = NULL;
	while (x < nb_word)
	{
		len = ft_wordlen(s, i, c);
		if(!(str[x] = ft_substr(s, i, len)))
		{
			return (ft_free(str));
		}

		i = i + len + 1;
		x++;
	}
	return (str);
}
/*
int		main(void)
{
	char **tab;
	char *str;
	char c;

	str = "split  ||this|for|me|||||!|";
	c = '|';
	tab = ft_split(str, c);
	for (int i = 0; tab[i] != NULL; ++i)
		printf("%s\n", tab[i]);
}
*/
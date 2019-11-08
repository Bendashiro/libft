/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitbis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:53:57 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/08 16:28:16 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_word(const char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if(s[i] != c)
		count++;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	return count;
}

static	int		ft_index(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	printf("index retourner = %d\n", i);
	return (i);
}
static	int		ft_wordlen(const char *s, char c, int i)
{

	while (s[i] && s[i] != c)
		i++;
	printf("len mesuré = %d\n", i);
	return (i - 1);
}

static	char	**ft_free(char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i++])
		free(str[i]);
	free(str);
	return (str);
}

char			**ft_splitbis(char const *s, char c)
{
	char **str;
	int word;
	int len;
	int i;
	int index;

	if (!s || !c)
		return (NULL);
	i = ft_index(s, c);
	index = 0;
	word = ft_word(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (word + 1))))
	{
		free(str);
		return (NULL);
	}
	str[word] = NULL;
	while (index < word)
	{
		len = ft_wordlen(s, i, c);
		if (!(str[index] = ft_substr(s, i, (len - i + 1))))
			return (ft_free(str));
		i = len + 1;
		while (s[i] == c)
			i++;
		index++;
	}
	return (str);
}

int		main(void)
{
	char **tab;
	char *str;
	char set;

	str = "     split	moi	 ca en		mot";
	set = ' ';
		tab = ft_splitbis(str, set);
	for (int i = 0; tab[i] != NULL; ++i)
		printf("%s\n", tab[i]);
}
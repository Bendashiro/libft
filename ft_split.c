/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:43:40 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/07 19:07:44 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_word(const char *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (s[i] != c)
		count++;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
		{
			count++;
		}
		i++;
	}
	return (count);
}

static	int		ft_index(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && str[i] == c)
		i++;
	return (i);
}

static	int		ft_wordlen(const char *str, int i, char c)
{
	while (str[i] && str[i] != c)
		i++;
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

char			**ft_split(char const *s, char c)
{
	char	**str;
	int		i[4];

	i[0] = ft_index(s, c);
	i[1] = 0;
	i[2] = ft_word(s, c);
	if (!s || !c)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * (i[2] + 1))))
	{
		free(str);
		return (NULL);
	}
	str[i[2]] = NULL;
	while (i[1] < i[2])
	{
		i[3] = ft_wordlen(s, i[0], c);
		if (!(str[i[1]] = ft_substr(s, i[0], (i[3] - i[0] + 1))))
			return (ft_free(str));
		i[0] = i[3] + 1;
		while (s[i[0]] == c)
			i[0]++;
		i[1]++;
	}
	return (str);
}

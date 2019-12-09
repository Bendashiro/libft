/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 16:14:56 by hibenfet          #+#    #+#             */
/*   Updated: 2019/12/09 18:01:39 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_nword(const char *str, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	if (str[i++] != c)
		count++;
	while (str[i])
	{
		if ((str[i] != c && str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static	int		ft_lenword(const char *s, char c, int i)
{
	int len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static	char	**freetab(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (0);
}

static	char	**ft_strsplit(const char *s, char c, int nword, char **str)
{
	int		word;
	int		len;
	int		i;

	i = -1;
	word = 0;
	while ((s[++i] && word < nword))
	{
		len = 0;
		if ((s[i] != c && i == 0) || (s[i] != c && s[i - 1] == c))
		{
			len = ft_lenword(s, c, i);
			if (!(str[word++] = ft_substr(s, (unsigned int)i, (size_t)len)))
				return (freetab(str));
			i += len;
		}
	}
	str[word] = NULL;
	return (str);
}

char			**ft_split(const char *s, char c)
{
	int		nword;
	char	**str;

	if (!s)
		return (0);
	nword = ft_nword(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * nword + 1)))
		return (NULL);
	if (!s[0])
	{
		if (!(str[0] = ft_substr(s, 0, 0)))
			return (freetab(str));
		str[1] = NULL;
		return (str);
	}
	return (ft_strsplit(s, c, nword, str));
}

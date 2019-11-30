/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 12:59:41 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/30 16:25:46 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_nword(const char *s, char c)
{
	int nword;
	int i;

	i = 0;
	nword = 0;
	if (s[0] != c)
		nword++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			nword++;
		i++;
	}
	//printf("nword == %d\n", nword);
	return (nword);
}

static	char	**freetab(char **str)
{
	int i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

static	char	**ft_spliter(char **rep, char *str, char c, int nword)
{
	int start;
	int word;
	int i;

	start = 0;
	word = 0;
	i = 0;
	while (str[i] && word <= nword)
	{
		if (str[i + 1] == '\0' || (str[i] == c && str[i + 1] != c))
		{
			//printf("occurence\n");
			if (!(rep[word] = ft_substr(str, start, i - start + 1)))
				freetab(rep);
			start = i + 1;
			word++;
		}
		i++;
	}
	return (rep);
}

char			**ft_split(char const *s, char c)
{
	char	**str;
	char	*copy;
	size_t	nword;
	size_t	i;
	size_t	word;

	if (!s)
		return (NULL);
	copy = ft_strtrim(s, &c);
	if (ft_strncmp(s, "", ft_strlen(copy)) == 0)
	{
		//printf("rentre\n");
		str = &copy;
		return (str);
	}
	//printf("copy == %s\n", copy);
	//printf("copy == %p\n", copy);
	nword = ft_nword(s, c);
	i = 0;
	word = 0;
	if (!(str = (char **)malloc(sizeof(char *) * nword + 1)))
		return (NULL);
	str = ft_spliter(str, copy, c, nword);
	str[nword] = 0;
	i = 0;
		//printf("f\n");
	while (str[i] && nword > 1)
	{
		str[i] = ft_strtrim(str[i], &c);
		i++;
	}
		//printf("g\n");
		//printf("str = %s\n", str[0]);
	return (str);
}
/*
int main(void)
{
	char *str;
	char set = '|';
	str = "split|||||moi||||   ca|||| avec|||";
	
	char **res; 
	if (!(res = ft_split(str, set)))
	 	return (-1);
	printf("the string == %s", res[0]);
	int i = 0;
	system("leaks a.out\n");
	while (res[i])
	{
		printf("the string: '%s'\n", res[i]);
		i++;
	}
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 12:59:41 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/26 20:49:54 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_nword(const char *s, char c)
{
	int nword;
	int i;

	i = 0;
	nword = 0;
	if (s[i] != c)
		nword++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			nword++;
		i++;
	}
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
		//printf("miaou\n");
		if (str[i + 1] == '\0' || (str[i] == c && str[i + 1] != c))
		{
			if (!(rep[word] = ft_substr(str, start, i - start + 1)))
				freetab(rep);
			start = i + 1;
			word++;
		}
		i++;
	}
	//printf("miaou finale\n");
	return (rep);
}

char			**ft_split(char const *s, char c)
{
	char	**str;
	char	*copy;
	size_t	nword;
	size_t	i;
	size_t	word;

	if (!s || !*s)
		return (NULL);
	copy = ft_strtrim(s, &c);
	//printf("copy == %s\n", copy);
	nword = ft_nword(copy, c);
	//printf("word === %zu\n", nword);
	i = 0;
	word = 0;
	if (!(str = (char **)malloc(sizeof(char *) * nword + 1)))
		return (NULL);
	//printf("miaou\n");
	str = ft_spliter(str, copy, c, nword);
	str[nword] = NULL;
	//printf("ouaffff\n");
	//printf("%s\n",str[0]);
	i = 0;
	printf("chien\n");
	while (str[i] && word != 1)
	{
		//printf("minou\n");
		str[i] = ft_strtrim(str[i], &c);
		i++;
		printf("strim : %s\n",str[i]);
		printf("chat\n");
	}
	printf("res presque final = %s\n", str[0]);
	return (str);
}


int main(void)
{
	char *str = "olol        ";
	char set = ' ';
	char **res = ft_split(str, set);
	int i = 0;
	printf("res final :\n");
	printf("");
	//system("leaks a.out\n");
	//printf("%s", res[0]);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}

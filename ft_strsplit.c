/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 12:23:07 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/30 22:4:09 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nword(const char *str, char c)
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

static int	ft_lenword(const char *s, char c, int i)
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

static char	**freetab(char **str, int word)
{
	word--;
	while (word >= 0)
	{
		free(str[word]);
		word--;
	}
	free(str);
	return (0);
}


char		**ft_strsplits(const char *s, char c, int nword)
{
	int word;
	int len;
	int i;
	char **str;

	if (!s)
		return (0);
	i = -1;
	word = 0;
	nword = ft_nword(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * nword + 1)))
		return (NULL);
	while (s[++i] && word < nword)
	{
		len = 0;
		if ((s[i] != c && s[i - 1] == c) || (s[i] != c && i == 0))
		{
			len = ft_lenword(s, c, i);
			if (!(str[word++] = ft_substr(s, (unsigned int)i, (size_t)len)))
				return (freetab(str, word));
			i += len;
		}
	}
	str[word] = NULL;
	return (str);
}

char		**ft_strsplit(const char *s, char c)
{
	int nword;

	nword = 0;
	return (ft_strsplits(s, c, nword));
}
/*
int main(void)
{
	char *str;
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char **res;
	char **res1;
	char **res2;
	char **res3;
	char **res4;
	char c;

	str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	str1 = "          ";
	str2 = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	str3 = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	str4 = NULL;
	c = ' ';

	res = ft_strsplit(str, c);
	while (*res)
	{
		printf("%s\n", *res++);
	}
	printf("---------------------------------------------\n");
	res1 = ft_strsplit(str1, c);
	while (*res1)
	{
		printf("res =");
		printf("%s\n", *res1++);
	}
	printf("---------------------------------------------\n");
	res2 = ft_strsplit(str2, c);
	while (*res2)
	{
		printf("%s\n", *res2++);
	}
	printf("---------------------------------------------\n");
	res3 = ft_strsplit(str3, 'i');
	//printf("res3 == %s\n", *res3);
	while (*res3)
	{
		printf("%s\n", *res3++);
	}
	printf("---------------------------------------------\n");
	res4 = ft_strsplit(str4, 'z');
	printf("res4 == %s\n", *res4);
	while (*res4)
	{
		printf("%s\n", *res4++);
	}
	printf("---------------------------------------------\n");
}*/
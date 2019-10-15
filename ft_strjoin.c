/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:27:40 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/15 18:13:26 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concatenate both string in one
** Remarque, verifier si le cas en commentaire est un bug ou pas
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	size_t len2;
	int i;
	int j;
	char *str;

	len = ft_strlen(s1);	
	len2 = ft_strlen(s2);
	i = 0;
	if (!(str = malloc(sizeof(char) * (len + len2 + 1))))
		return (NULL);
	j = 0;
	while (s1[i])
		str[i++] = s1[j++];
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

int		main(void)
{
	char *s1 = "je regarde";
	char *s2 = "01234567891011121314";
	char *rep;

	rep = ft_strjoin(s1, s2);
	printf("concat : %s", rep);
}
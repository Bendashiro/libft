/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:09:15 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/26 21:58:33 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Create a substring from the "start" with
** len lenght more than start
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (!(str = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	/*i = start;
	j = 0;
	while(i < start + len && s[i] != '\0')
	{
		str[j] = s[i];
		j++;
		i++;
	}
	return (str);*/
	i = -1;
	j = 0;
	while (s[++i] != '\0')
		if (i >= start && (int)len-- > 0)
			str[j++] = s[i];
	str[j] = '\0';
	return (str);
	
}
/*
int     main(void)
{
	char *str = "la mention tres bien est pejorative";
	unsigned int start = 5;
	size_t len = 10;
	char *rep;

	rep = ft_substr(str, start, len);
	printf("ft_sub : %s", rep);
}
*/
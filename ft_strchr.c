/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:32:05 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/15 11:54:54 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strchr locates the first occurence of c
** converted to char in the string pointed by
** s and return s pointer to the located character
** or NULL if not finded.
*/

char	*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char*)s;
	while (*str++ != '\0')
	{
		if (*str == (unsigned char)c)
			return (str);
	}
	/*if ((unsigned char)c == '\0')
		return (str);*/
	return (NULL);
}

int     main(void)
{
	char str[16] = "je code beaucoup";
	int c = 0;
	char *rep;
	char *rep2;

	rep = ft_strchr(str, c);
	rep2 = strchr(str, c);
	printf("ft_strrchr : %s\n", rep);
	printf("strrchr : %s\n", rep2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:09:54 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/14 23:19:46 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	char *str;

	str = (char*)s;
	while (*str++ != '\0')
	{
		if (*str == (unsigned char)c)
			return (str);
	}
	return (NULL);
}

int     main(void)
{
	char str[16] = "je code beaucoup";
	int c = 111;
	char *rep;
	char *rep2;

	rep = ft_strrchr(str, c);
	rep2 = strrchr(str, c);
	printf("ft_strrchr : %s\n", rep);
	printf("strrchr : %s\n", rep2);
}
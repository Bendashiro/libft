/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:52:41 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/27 21:12:10 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *ss1;
	unsigned char *ss2;
	size_t i;


	i = 0;
	/*if (*s1 == '\0' || *s2 == '\0')
		return (s1[i] - s2[i]);	*/
	if (n == 0)
		return (0);
	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	while (((ss1[i] && !ss2[i]) || (ss2[i] && !ss1[i]) || (ss1[i] && ss2[i])) && i <= n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:37:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/11 21:08:48 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/**
 * Locate the first occurence of the null-terminated string needle
 * in the string haystack.
*/

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (needle == '\0')
		return (haystack);
	while (haystack != '\0' && len-- > 0)
	{
	}
}
	
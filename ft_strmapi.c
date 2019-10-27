/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 13:37:23 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/27 15:35:48 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    int len;
    char *str;

    len = ft_strlen(s);
    if (!(str = (char *)malloc(sizeof(char) * len)))
        return (NULL);
    
    i = 0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    return (str);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:13:13 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/14 15:24:25 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (((unsigned char)c >= 'a' && (unsigned char)c <= 'z') ||
	((unsigned char)c >= 'A' && (unsigned char)c <= 'Z') ||
	((unsigned char)c >= '0' && (unsigned char)c <= '9'))
		return (1);
	else
		return (0);	
}

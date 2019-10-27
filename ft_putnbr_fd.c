/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:20:53 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/27 15:37:40 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	int mod;
	int div;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}

	if (n > 9)
	{
		mod = (n % 10) + '0';
		div = (n / 10) + '0';
		ft_putnbr_fd(div, fd);
		ft_putchar_fd(mod, fd);
	}
	if (n >= 0 && n < 9)
	{
		n += '0';
		ft_putchar_fd(n, fd);
	}
}
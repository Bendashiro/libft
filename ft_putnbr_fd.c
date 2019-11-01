/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:20:53 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/01 21:13:55 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void ft_putnbr_fd(int n, int fd)
{
	long nb;
	long mod;
	long div;

	nb = (long)n;
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nb, fd);
	}
	if (nb > 9)
	{
		mod = (nb % 10) + '0';
		div = (nb / 10);
		ft_putnbr_fd(div, fd);
		ft_putchar_fd(mod, fd);
	}
	if (nb >= 0 && nb <= 9)
	{
		nb += '0';
		ft_putchar_fd(nb, fd);
	}
}

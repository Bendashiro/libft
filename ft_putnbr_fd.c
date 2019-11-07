/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 14:20:53 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/07 21:55:12 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	ft_putnbr_fd(int n, int fd)
{
	long nb[2];

	nb[0] = (long)n;
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb[0] < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nb[0], fd);
	}
	if (nb[0] > 9)
	{
		nb[1] = (nb[0] % 10) + '0';
		ft_putnbr_fd((nb[0] / 10), fd);
		ft_putchar_fd(nb[1], fd);
	}
	if (nb[0] >= 0 && nb[0] <= 9)
		ft_putchar_fd((nb[0] + '0'), fd);
}

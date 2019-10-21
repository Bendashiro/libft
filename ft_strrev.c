/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:34:48 by hibenfet          #+#    #+#             */
/*   Updated: 2019/10/21 18:32:26 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str);
	j = len - 1;
	printf("%d\n", j);
	while (i < j)
	{
		//printf("1 : %c est remplacer par %c\n", tmp, str[i]);
		tmp = str[i];
		//printf("%c\n", str[0]);
		//printf("2 : %c est remplacer par %c\n", str[i], str[j]);
		str[i++] = str[j];
		//printf("3 : %c est remplacer par %c\n", str[j], tmp);
		str[j--] = tmp;
	}
	return (str);
}

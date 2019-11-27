/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:37:02 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/27 16:24:58 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*meule;
	char	*aiguille;
	size_t	i;
	size_t	j;

	if (!needle || !haystack)
		return (NULL);
	meule = (char*)haystack;
	aiguille = (char*)needle;
	if (ft_strncmp(aiguille, "", ft_strlen(aiguille)) == 0)
		return (meule);
	i = -1;
	while (meule[++i] != '\0' && i < len)
	{
		j = 0;
		printf("boucle");
		while (meule[i] == aiguille[j] && i <= len)
		{
			printf("meule[%zu] == %c est = a aiguille[%zu] == %c\n", i, meule[i], j, aiguille[j]);
			j++;
			if (aiguille[j] == '\0')
			{
				//printf("meule[%zu] == %c est = a aiguille[%zu] == %c\n", i, meule[i], i, aiguille[i]);
				printf("fin\n");
				printf("result == %s pour i = %zu  j == %zu et minus == %zu\n", &meule[i - j], i, j, (i - j + 1));
				return (&meule[i - j + 1]);
			}
			i++;
		}
	}
	return (NULL);
}

int		main(int argc, char **argv)
{
	char *hay1 = NULL;
	char *nee1 = "fdfdfad";
	int len = ft_strlen(hay1);
	char *hay2 = hay1;
	char *nee2 = nee1;
	// printf("ft_strnstr == %s\n", ft_strnstr(argv[1], argv[2] , 65));
	// printf("strnstr == %s\n", strnstr(argv[1], argv[2] , 65));
	printf("ft_strnstr == %s\n", ft_strnstr(hay1, nee1 , 65));
	printf("strnstr == %s\n", strnstr(hay2, nee2 , 65));
}
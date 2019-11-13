/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hibenfet <hibenfet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:55:44 by hibenfet          #+#    #+#             */
/*   Updated: 2019/11/13 17:47:07 by hibenfet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** main test sur les listes
*/

int		main(void)
{
	t_list	*test;
	t_list	*test2;
	t_list	*test3;
	t_list	*rep;
	char	s1[] = " 1 2 3 ";
	char	s2[] = "fghij";
	char	s3[] = "klmno";
	//int		len;

	test = ((void*)0);
	test = ft_lstnew(s1);
	test2 = ft_lstnew(s2);
	test3 = ft_lstnew(s3);
	//test = NULL;
	//test->content = NULL;
	ft_lstadd_back(&test, test2);
	ft_lstadd_back(&test, test3);
	/*len = ft_lstsize(test);
	printf("len == %d\n", len);*/
	//ft_lstdelone(test, &ft_del);
	//ft_lstclear(&test, &ft_del);
	rep = ft_lstmap(test, &ft_f, &ft_del);
	/*len = ft_lstsize(rep);
	printf("len == %d\n", len);*/
	printf("%p\n", rep);
	while (rep)
	{
		printf("%s\n", rep->content);
		rep = rep->next;
	}
	return (0);
}
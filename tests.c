/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:58:33 by vegret            #+#    #+#             */
/*   Updated: 2022/09/05 16:58:33 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

void	pinl(void *e)
{
	printf("%d, ", *(int *) e);
}

void	*divtest(void *e)
{
	int *new;

	new = malloc(sizeof(int));
	*new = *(int *)e / 2;
	return (new);
}

t_list
	*ft_lstmap2(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}

int	main(int argc, char const *argv[])
{
	(void) argc;
	(void) argv;
	t_list *start = NULL;
	t_list *mapped = NULL;
 
    // Create and print an int linked list
    unsigned int_size = sizeof(int);
    int arr[] = {10, 20, 30, 40, 50}, i;
    for (i=4; i>=0; i--)
       ft_lstadd_front(&start, ft_lstnew(&arr[i]));
    printf("Created integer linked list is \n");
	//mapped = ft_lstmap(start, &divtest, &free);
	//ft_lstclear(&start, &free);
    ft_lstiter(start, &pinl);
	
	return (0);
}

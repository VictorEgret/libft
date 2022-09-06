/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:35:45 by vegret            #+#    #+#             */
/*   Updated: 2022/09/05 23:35:45 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// TODO check l'appel a f (**f)
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*mapped;

	if (!lst || !f)
		return (NULL);
	tmp = lst;
	while (tmp)
	{
		ft_lstadd_front(&tmp, ft_lstnew((**f)(tmp->content)));
		tmp = tmp->next;
	}
	ft_lstclear(&lst, del);
	return (mapped);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 23:26:48 by vegret            #+#    #+#             */
/*   Updated: 2022/09/05 23:26:48 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*last;

	if (!lst)
		return ;
	last = ft_lstlast(*lst);
	while (*lst || last)
	{
		ft_lstdelone(last, del);
		last = ft_lstlast(*lst);
	}
	*lst = NULL;
}

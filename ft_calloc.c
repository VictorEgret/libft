/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:01:37 by vegret            #+#    #+#             */
/*   Updated: 2022/11/07 13:55:20 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (size > 0 && nmemb > ((size_t) -1) / size)
		return (NULL);
	result = malloc(nmemb * size);
	if (result)
		ft_bzero(result, nmemb * size);
	return (result);
}

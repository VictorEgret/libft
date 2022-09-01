/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 00:46:33 by vegret            #+#    #+#             */
/*   Updated: 2022/09/02 00:46:33 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	tmp;

	i = 0;
	while (i < n)
	{
		tmp = *((unsigned char *) src + i);
		*((unsigned char *) dest + i) = tmp;
		i++;
	}
	return (dest);
}

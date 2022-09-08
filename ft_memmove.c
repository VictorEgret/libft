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

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src + n)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			*((unsigned char *) dest + n) = *((unsigned char *) src + n);
	return (dest);
}

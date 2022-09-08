/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:39:04 by vegret            #+#    #+#             */
/*   Updated: 2022/09/01 15:39:04 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// Fail les test quand on cast avec unsigned char
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (*((char *) s) == c)
			return ((void *) s);
		n--;
		s++;
	}
	return (NULL);
}

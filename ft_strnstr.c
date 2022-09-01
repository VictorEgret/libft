/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:54:25 by vegret            #+#    #+#             */
/*   Updated: 2022/09/01 17:54:25 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	j;

	if (*s2 == '\0')
		return ((char *) s1);
	while (*s1 != '\0' && len)
	{
		j = 0;
		while (s2[j] == s1[j])
		{
			j++;
			if (s2[j] == '\0')
				return ((char *) s1);
		}
		s1++;
		len--;
	}
	return (NULL);
}

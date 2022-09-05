/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.C                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 23:27:16 by vegret            #+#    #+#             */
/*   Updated: 2022/09/02 23:27:16 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	strcontains(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (s1[i])
		if (!strcontains(set, s1[i++]))
			len++;
	result = (char *) malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (!strcontains(set, s1[i]))
			*result++ = s1[i];
		i++;
	}
	*result = '\0';
	return (result - len);
}

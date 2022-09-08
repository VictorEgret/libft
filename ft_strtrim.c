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
#include <stdio.h>
#include "libft.h"

static int	ft_strcontains(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

static size_t end(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (ft_strcontains(set, s1[end]))
		end--;
	return (++end);
}

// TODO Finir
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	size_t	len;

	i = 0;
	len = end(s1, set);
	while (s1[i])
		if (ft_strcontains(set, s1[i++]))
			len--;
		else
			break;
	result = (char *) malloc(len + 1);
	if (!result)
		return (NULL);
	i--;
	while (s1[i] && len)
	{
		printf("%d, %c\n", i, s1[i]);
		*result++ = s1[i++];
	}
	*result = '\0';
	return (result - len);
}

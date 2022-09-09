/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:40:17 by vegret            #+#    #+#             */
/*   Updated: 2022/09/02 17:40:17 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	result_len;

	if (ft_strlen(s) < start)
		return (NULL);
	result_len = ft_strlen(s) - start;
	if (result_len > len)
		result_len = len;
	result = malloc(result_len + 1);
	if (!result)
		return (NULL);
	result = ft_memcpy(result, s + start, result_len);
	result[result_len] = '\0';
	return (result);
}

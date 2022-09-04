/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 16:55:46 by vegret            #+#    #+#             */
/*   Updated: 2022/09/04 16:55:46 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static size_t	intlen(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;

	len = intlen(n);
	result = (char *) malloc(len + 1);
	printf("%d\n", len);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		*result = '-';
		n*=-1;
	}
	result += len;
	*result-- = '\0';
	while (n != 0)
	{
		*result-- = '0' + (n % 10);
		n /= 10;
	}
	return (result);
}

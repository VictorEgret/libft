/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:02:22 by vegret            #+#    #+#             */
/*   Updated: 2022/09/05 17:02:22 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// TODO Finir
static int word_count(char const *s, char c)
{
	int	result;
	int	on_word;

	result = 0;
	on_word = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (on_word)
			{
				result++;
				on_word = 0;
			}
		}
		else
			on_word = 1;
		s++;
	}
	return (result + on_word);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		words;

	words = word_count(s, c);
	strs = malloc(words * sizeof(char *));
	if (!strs)
		return (NULL);
	return (strs);
}

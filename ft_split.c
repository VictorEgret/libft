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

// TODO Opti
static void	strings_copy(char *str, char c, char **strs)
{
	int	i;
	int	k;
	int	start;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
		{
			strs[k][i - start] = str[i];
			i++;
		}
		if (i > start)
			k++;
	}
}

static void	free_tab(void **tab, size_t size)
{
	while (size--)
		free(tab[size]);
	free(tab);
}

static void	strings_alloc(char *str, char c, char **strs)
{
	int	i;
	int	k;
	int	start;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
			i++;
		if (i > start)
		{
			strs[k] = malloc(sizeof strs[k] * (i - start + 1));
			if (!strs[k])
			{
				free_tab((void **) strs, k);
				return ;
			}
			strs[k][i - start] = '\0';
			k++;
		}
	}
}

static char	**words_alloc(char *str, char c, int *len_strs)
{
	char	**strs;
	int		i;
	int		start;

	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
			i++;
		if (i > start)
			(*len_strs)++;
	}
	strs = malloc(sizeof strs * (*len_strs + 1));
	if (strs == NULL)
		return (NULL);
	strs[*len_strs] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		len_strs;

	len_strs = 0;
	strs = words_alloc((char *) s, c, &len_strs);
	if (len_strs == 0)
		return (strs);
	strings_alloc((char *) s, c, strs);
	strings_copy((char *) s, c, strs);
	return (strs);
}

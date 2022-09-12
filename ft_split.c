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

// TODO Finir
static int	word_count(char const *s, char c)
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

static void	*free_tab2d(char **tab, int start)
{
	while (*tab[start])
	{
		free(tab[start]);
		start++;
	}
	free(tab);
	return (NULL);
}

static char	*copy_next_word(char const	*s, char c, int *i)
{
	char	*word;
	int		tmp;
	int		j;

	while (s[*i] && s[*i] == c)
		(*i)++;
	tmp = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	word = malloc((*i - tmp + 1) * sizeof(char));
	if (!word)
		return (NULL);
	j = 0;
	while (j < *i - tmp)
	{
		word[j] = s[tmp + j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		words;
	int		word;
	int		i;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	splitted = malloc((words + 1) * sizeof(char *));
	if (!splitted)
		return (NULL);
	i = 0;
	while (word < words)
	{
		splitted[word] = copy_next_word(s, c, &i);
		if (!splitted[word])
			return (free_tab2d(splitted, 0));
		word++;
	}
	splitted[words] = NULL;
	return (splitted);
}

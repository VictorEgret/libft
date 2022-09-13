/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vegret <victor.egret.pro@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:58:33 by vegret            #+#    #+#             */
/*   Updated: 2022/09/05 16:58:33 by vegret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "libft.h"

int	main(int argc, char const *argv[])
{
	//(void) argc;
	//(void) argv;
	char test[] = "--1-2--3---4----5-----42--";
	char c = '-';
	char **splitted = ft_split(test, c);
	for (int i = 0; i < 6; i++)
	{
		printf("tab[%d] = %s\n", i, splitted[i]);
	}	
	return (0);
}

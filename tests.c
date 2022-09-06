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
#include <limits.h>
#include "libft.h"

int	main(int argc, char const *argv[])
{
	(void) argc;
	(void) argv;
	char src[] = "test";
	char dest[] = "test";
	int n = 5;

    char example1[50];
    char example2[50];
	
    strcpy(example1, "tes");
    strcpy(example2, "test");

	printf("FT: %d\n", ft_memcmp(example1, example2, 4));
	printf("Sys: %d\n", memcmp(example1, example2, 4));
	
	return (0);
}

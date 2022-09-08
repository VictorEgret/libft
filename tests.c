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
	char s[] = {0, 1, 2, 3, 4, 5};
	printf("%p", ft_calloc(SSIZE_MAX, SSIZE_MAX));
	//printf("%s", ft_memchr(s, 2 + 256, 3));
	return (0);
}

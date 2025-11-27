/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:32:08 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/17 10:47:02 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"

void	ft_bzero(void *dest, size_t count)
{
	char	*p;

	p = (char *) dest;
	while (count > 0)
	{
		*(p++) = 0;
		count--;
	}
}

/*int	main(void)
{
	char	a[] = "BBCDEF";
	size_t	count;

	count = 1;
	ft_bzero(a, count);
	printf("%s\n", a);
}*/

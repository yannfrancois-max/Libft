/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:10:25 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/10 17:56:53 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*p;
	unsigned char	*q;
	int				i;
	int				j;

	p = (unsigned char *) dest;
	q = (unsigned char *) src;
	i = 0;
	j = count;
	while (i < j)
	{
		p[i] = q[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	a[] = "BBCDEF";
	char	*b;
	char	*h;
	size_t	count;

	b = "UVWXYZ";
	count = 2;
	h = ft_memcpy(a, b, count);
	printf("%s\n", h);
}*/

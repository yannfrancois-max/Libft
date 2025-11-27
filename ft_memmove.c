/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:06:40 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/17 11:47:05 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char		*p;
	const unsigned char	*q;

	if (!dest && !src)
		return (NULL);
	q = (const unsigned char *) src;
	p = (unsigned char *) dest;
	if (p > q && p < q + count)
	{
		while (count--)
			p[count] = q[count];
	}
	else if (p != q)
	{
		while (count--)
			*p++ = *q++;
	}
	return (dest);
}

/*int	main(void)
{
	char	a[32] = "YZCDEF";
	char	*b;
	char	*h;
	size_t	count;

	b = "ABWXYZ";
	count = 2;
	h = ft_memmove(a, b, count);
	printf("%s\n", h);
}*/

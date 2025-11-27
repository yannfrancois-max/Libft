/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:21:38 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/11 16:56:15 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*p;
	int				i;
	int				j;

	p = (unsigned char *) dest;
	i = 0;
	j = count - 1;
	while (i <= j)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	a[] = "BBCDEF";
	char	*h;
	int		b;
	size_t	count;

	b = 65;
	count = 1;
	h = ft_memset(a, b, count);
	printf("%s\n", h);
}*/

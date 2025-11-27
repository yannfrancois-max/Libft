/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:58:47 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/17 10:40:29 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	j;

	j = ft_strlen(src);
	if ((j + 1) < n)
		ft_memcpy(dest, src, j + 1);
	else if (n != 0)
	{
		ft_memcpy(dest, src, n - 1);
		dest[n - 1] = 0;
	}
	return (j);
}

/*int	main(void)
{
	char	h[] = "UVWXYZ";
	char	*a;
	size_t	b;

	a = "ABCDEF";
	printf("%s\n", h);
	printf("%ld\n", sizeof(h));
	printf("%ld\n", ft_strlen(h));
	b = ft_strlcpy(h, a, ft_strlen(h));
	printf("%lx\n", b);
	printf("%s\n", h);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:39:48 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/17 12:08:15 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (destlen >= n)
		destlen = n;
	if (destlen == n)
		return (n + srclen);
	if (srclen < n - destlen)
		ft_memcpy(dest + destlen, src, srclen + 1);
	else
	{
		ft_memcpy(dest + destlen, src, n - destlen - 1);
		dest[n - 1] = '\0';
	}
	return (srclen + destlen);
}

/*int	main(void)
{
	char	h[30] = "ABCDEF";
	char	*a;
	size_t	b;

	a = "GHIJKL";
	printf("%s\n", h);
	printf("%ld\n", (ft_strlen(h) + ft_strlen(a)));
	b = ft_strlcat(h, a, (ft_strlen(h) + ft_strlen(a)));
	printf("%lx\n", b);
	printf("%s\n", h);
}*/

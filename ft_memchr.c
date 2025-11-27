/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:15:41 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/17 10:07:03 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const void	*k;
	int	c;
	int	d;
	int	e;
	unsigned int	sz;

	c = 'C';
	d = 'X';
	e = '\0';
	sz = 5;
	k = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%p\n", ft_memchr(k, c, sz));
	printf("%p\n", ft_memchr(k, d, sz));
	printf("%p\n", ft_memchr(k, e, sz));
}*/

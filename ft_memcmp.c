/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:26:20 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/07 10:47:52 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t s)
{
	size_t					i;
	unsigned char			*tmp1;
	unsigned char			*tmp2;

	tmp1 = (unsigned char *)p1;
	tmp2 = (unsigned char *)p2;
	if (s == 0)
		return (0);
	i = 0;
	while (i < s)
	{
		if (tmp1[i] != tmp2[i])
			return (tmp1[i] - (tmp2[i]));
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*a;
	char	*b;

	a = "abc\0def";
	b = "abc\0xyz";
	printf("%d\n", ft_memcmp(a, b, 3)); // 0
	printf("%d\n", ft_memcmp(a, b, 4)); // 0
	printf("%d\n", ft_memcmp(a, b, 5)); // negative ('d' < 'x')
	printf("%d\n", ft_memcmp(a, b, 7)); // negative ('d' < 'x')
}*/

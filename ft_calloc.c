/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:06:16 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/21 11:12:31 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	if (size != 0 && count > ((size_t) -1 / size))
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

/*int	main(void)
{
	size_t	count;
	size_t	size;
	char	*h;

	count = 5;
	size = sizeof(char);
	h = (char *)ft_calloc(count, size);
	if (!h)
		return (0);
	printf("%s\n", h);
	free(h);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:46:04 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/05 16:05:22 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stddef.h>*/
#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char	*c;

	c = "Hello World!";
	printf("%d\n", ft_strlen(c));
}*/

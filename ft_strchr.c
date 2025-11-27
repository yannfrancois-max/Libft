/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:08:53 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/07 09:25:34 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search)
{
	while (*str)
	{
		if (*str == (char)search)
			return ((char *)str);
		str++;
	}
	if (search == '\0')
		return ((char *)str);
	else
		return (NULL);
}

/*int	main(void)
{
	const char	*k;
	int	c;
	int	d;
	int	e;

	c = 'X';
	d = '\0';
	e = '!';
	k = "ABCDEFGHIJKLMNOPQRSTUVXWYZ";
	printf("%s\n", ft_strchr(k, c));
	printf("%s\n", ft_strchr(k, d));
	printf("%s\n", ft_strchr(k, e));
}*/

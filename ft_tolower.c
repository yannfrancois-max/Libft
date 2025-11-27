/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:03:38 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/18 12:12:01 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}

/*int	main(void)
{
	int	x;
	int	y;
	int	z;

	x = 'a';
	y = 'A';
	z = '2';
	printf("%c\n", ft_tolower(x));
	printf("%c\n", ft_tolower(y));
	printf("%c\n", ft_tolower(z));
}*/

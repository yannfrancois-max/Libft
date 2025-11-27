/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:52:31 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/12 13:31:41 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
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
	printf("%c\n", ft_toupper(x));
	printf("%c\n", ft_toupper(y));
	printf("%c\n", ft_toupper(z));
}*/

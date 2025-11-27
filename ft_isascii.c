/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:10:19 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/17 10:23:17 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	else
		return (1);
}

/*int	main(void)
{
	int	w;
	int	x;
	int	y;
	int	z;

	w = 'b';
	x = 128;
	y = '$';
	z = -1;
	printf("%d\n", ft_isascii(w));
	printf("%d\n", ft_isascii(x));
	printf("%d\n", ft_isascii(y));
	printf("%d\n", ft_isascii(z));
}*/

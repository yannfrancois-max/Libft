/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:37:48 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/27 09:16:29 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_isprint(int c)
{
	if ((c >= 32 && c < 127))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	w;
	int	x;
	int	y;
	int	z;

	w = 'c';
	x = '2';
	y = 13;
	z = 127;
	printf("%d\n", ft_isprint(w));
	printf("%d\n", ft_isprint(x));
	printf("%d\n", ft_isprint(y));
	printf("%d\n", ft_isprint(z));
}*/

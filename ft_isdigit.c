/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:52:24 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/05 15:34:17 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	w;
	int	x;
	int	y;
	int	z;

	w = 'b';
	x = '2';
	y = '$';
	z = 'H';
	printf("%d\n", ft_isdigit(w));
	printf("%d\n", ft_isdigit(x));
	printf("%d\n", ft_isdigit(y));
	printf("%d\n", ft_isdigit(z));
}*/

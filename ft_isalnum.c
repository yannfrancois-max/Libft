/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:00:32 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/05 15:30:40 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
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
	printf("%d\n", ft_isalnum(w));
	printf("%d\n", ft_isalnum(x));
	printf("%d\n", ft_isalnum(y));
	printf("%d\n", ft_isalnum(z));
}*/

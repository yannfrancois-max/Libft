/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:11:10 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/05 15:29:46 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
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
	printf("%d\n", ft_isalpha(w));
	printf("%d\n", ft_isalpha(x));
	printf("%d\n", ft_isalpha(y));
	printf("%d\n", ft_isalpha(z));
}*/

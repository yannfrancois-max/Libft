/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:30:54 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/12 11:31:30 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '+' && s[i + 1] != '-')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - 48);
		i++;
	}
	return (res * sign);
}

/*#include <stdio.h>

int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	char	*d;

	a = "42";
	b = " +42";
	c = "a42";
	d = " 	42a12";
	printf("%d\n", ft_atoi(a));
	printf("%d\n", ft_atoi(b));
	printf("%d\n", ft_atoi(c));
	printf("%d\n", ft_atoi(d));
}*/

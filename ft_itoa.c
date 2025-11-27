/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:00:39 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/21 11:13:13 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

static char	ft_putchar(long n)
{
	char	c;

	c = n + 48;
	return (c);
}

static int	ft_count_len(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

static char	*ft_trad(char *dest, int d, long n)
{
	int	i;

	i = 0;
	dest[d + 1] = '\0';
	if (n < 0)
	{
		dest[0] = '-';
		n = n * -1;
		i++;
	}
	while (d >= i)
	{
		if (n > 9)
		{
			dest[d] = (ft_putchar(n % 10));
			n = n / 10;
			d--;
		}
		if (n <= 9)
		{
			dest[d] = ft_putchar(n);
			d--;
		}
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	int		d;
	char	*trad;
	long	nbr;

	nbr = n;
	d = ft_count_len(nbr) - 1;
	trad = malloc((ft_count_len(nbr) + 1) * sizeof(char));
	if (nbr >= 0 && nbr <= 9)
	{
		trad[d] = nbr + 48;
		trad[d + 1] = '\0';
	}
	if (nbr > 9 || nbr < 0)
		trad = ft_trad(trad, d, nbr);
	return (trad);
}

/*int	main(void)
{
	int		c;
	char	*res;

	c = -2147483648;
	res = ft_itoa(c);
	printf("%s\n", res);
	return (0);
}*/

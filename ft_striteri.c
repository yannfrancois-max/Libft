/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 12:47:42 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/18 17:46:26 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	to_upper_even(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_toupper(*c);
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Bonjour les amis !";

	printf("Avant ft_striteri : %s\n", str);
	ft_striteri(str, to_upper_even);
	printf("Après ft_striteri : %s\n", str);

	return (0);
}*/

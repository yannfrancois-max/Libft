/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:52:02 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/19 14:08:07 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	to_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = malloc(ft_strlen(s) * sizeof(char) + 1);
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*result;

	str = "Welcome to 42!";
	result = ft_strmapi(str, to_upper_even);
	if (result == NULL)
	{
		printf("Erreur d’allocation mémoire\n");
		return (1);
	}
	printf("Chaîne originale : %s\n", str);
	printf("Résultat ft_strmapi : %s\n", result);

	free(result);
	return (0);
}*/

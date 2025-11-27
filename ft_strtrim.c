/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 09:54:22 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/18 17:42:50 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_newstr(int i, int j, char const *s1)
{
	int		k;
	int		l;
	char	*newstr;

	l = 0;
	k = j - i + 1;
	newstr = malloc(k * sizeof(char));
	if (!newstr)
		return (NULL);
	while (i <= j - 1)
	{
		newstr[l] = s1[i];
		i++;
		l++;
	}
	newstr[l] = '\0';
	return (newstr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	if (ft_strlen(s1) == 0)
		return (ft_calloc(1, 1));
	while (s1[i] && ft_search(set, s1[i]))
		i++;
	while (j > i && ft_search(set, s1[j - 1]))
		j--;
	return (ft_newstr(i, j, s1));
}

/*#include <stdio.h>

int	main(void)
{
	char	*to_trim;
	char	*trimmed_car;

	to_trim = "dba";
	trimmed_car = "acb";
	printf("%ld\n", ft_strlen(ft_strtrim(to_trim, trimmed_car)));
	printf("%s\n", ft_strtrim(to_trim, trimmed_car));
	return (0);
}*/

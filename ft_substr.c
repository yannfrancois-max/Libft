/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:41:10 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/17 13:58:02 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	char const		*str;
	unsigned int	start;
	size_t			len;
	char			*test;

	str = "Ceci est un test";
	start = 1;
	len = 0;
	test = ft_substr(str, start, len);
	if (test == NULL)
	{
		printf("test == NULL");
		return (0);
	}
	printf("%s\n", test);
	free(test);
	return (0);
}*/

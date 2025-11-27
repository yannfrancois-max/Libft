/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:53:55 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/17 14:15:59 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	size_t		i;
	size_t		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	else
	{
		ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof (char));
		i = 0;
		j = ft_strlen(s1);
		ft_strlcpy(ptr, s1, j + 1);
		while (s2[i] != 0)
		{
			ptr[j] = s2[i];
			i++;
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
}

/*#include <stdio.h>

int	main(void)
{
	char const	*src1;
	char const	*src2;
	char const	*src3;
	char		*test1;
	char		*test2;

	src1 = "42";
	src2 = "tripouille";
	src3 = NULL;
	test1 = ft_strjoin(src2, src1);
	if (test1 == NULL)
	{
		printf("test1 == NULL\n");
		return (0);
	}
	printf("%s\n", test1);
	free(test1);
	test2 = ft_strjoin(src3, src1);
	if (test2 == NULL)
	{
		printf("test2 == NULL\n");
		return (0);
	}
	printf("%s\n", test2);
	free(test2);
	return (0);
}*/

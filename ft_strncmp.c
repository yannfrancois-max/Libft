/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:20:57 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/07 09:50:35 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < (n - 1) && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;

	str1 = "ABC";
	str2 = "ABCD";
	str3 = "ABX";
	str4 = "AB";
	str5 = "ABB";
	printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d\n", ft_strncmp(str1, str3, 4));
	printf("%d\n", ft_strncmp(str1, str4, 3));
	printf("%d\n", ft_strncmp(str1, str5, 3));
	printf("%d\n", ft_strncmp(str1, str2, 6));
	printf("%d\n", ft_strncmp(str4, str2, 4));
}*/

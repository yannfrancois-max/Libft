/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:53:50 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/17 10:44:10 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			cc;

	cc = (char) c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == c)
		res = (char *) &s[i];
	return (res);
}

/*int	main(void)
{
	const char	*k;
	int	a1;
	int	a2;
	int	a3;
	
	a1 = 'X';
	a2 = '\0';
	a3 = '!';
	k = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("%s\n", ft_strrchr(k, a1));
	printf("%s\n", ft_strrchr(k, a2));
	printf("%s\n", ft_strrchr(k, a3));
}*/

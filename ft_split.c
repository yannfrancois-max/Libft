/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafranco <yafranco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:02:25 by yafranco          #+#    #+#             */
/*   Updated: 2025/11/20 18:39:56 by yafranco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **tofree, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(tofree[i]);
		i++;
	}
	free(tofree);
}

static int	ft_cwords(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*fill_words(const char *src, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = src[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static char	**running_split(const char *src, char c, char **res, int s_word)
{
	size_t	i;
	int		j;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(src);
	while (i <= len)
	{
		if (src[i] != c && s_word < 0)
			s_word = i;
		else if ((src[i] == c || i == len) && s_word >= 0)
		{
			res[j] = fill_words(src, s_word, i);
			if (!(res[j]))
			{
				ft_free(res, j);
				return (NULL);
			}
			s_word = -1;
			j++;
		}
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		s_word;

	s_word = -1;
	if (!s)
		return (NULL);
	res = ft_calloc((ft_cwords(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	res = running_split(s, c, res, s_word);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:12:30 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/05 20:46:14 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = count;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static size_t	word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**ft_free(char **array, size_t len)
{
	while (len > 0)
	{
		free(array[--len]);
		array[len] = NULL;
	}
	free(array);
	array = NULL;
	return (NULL);
}

static void	ft_set(char **array, const char *s, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		array[i] = ft_calloc((len + 1), sizeof(char));
		if (!array[i])
		{
			ft_free(array, i);
			return ;
		}
		j = 0;
		while (j < len)
		{
			array[i][j] = s[j];
			j++;
		}
		s += len;
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	words;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	result = ft_calloc((words + 1), sizeof(char *));
	if (!result)
		return (NULL);
	ft_set(result, s, c, words);
	return (result);
}

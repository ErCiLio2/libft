/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 19:24:22 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/01 12:02:58 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_chr_to_trim(const char *str, int c)
{
	if (!str)
		return (0);
	while (*str)
	{
		if ((unsigned char)*str == (unsigned char)c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned char	*trimed;
	size_t			len;
	size_t			right;
	size_t			left;
	size_t			i;

	if (!s1)
		return (NULL);
	left = 0;
	right = ft_strlen(s1) - 1;
	while (find_chr_to_trim(set, s1[left]))
		left++;
	while (find_chr_to_trim(set, s1[right]))
		right--;
	len = right - (left - 1);
	if (!right || (left >= ft_strlen(s1)))
		return (ft_strdup(""));
	trimed = (unsigned char *)ft_calloc((len + 1), sizeof(char));
	if (!trimed)
		return (NULL);
	i = 0;
	while (s1[left] && len--)
		trimed[i++] = s1[left++];
	trimed[i] = 0;
	return ((char *)trimed);
}

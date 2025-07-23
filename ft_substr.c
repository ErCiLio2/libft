/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:36:34 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/05 19:57:53 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*new_str;
	size_t			count;
	size_t			len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen((char *)s);
	if (len_s < start)
		return (ft_strdup(""));
	if (len >= len_s)
		len = (len_s - start);
	new_str = (unsigned char *)malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	count = 0;
	while (s[start] && len--)
		new_str[count++] = s[start++];
	new_str[count] = 0;
	return ((char *)new_str);
}

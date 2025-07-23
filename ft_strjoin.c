/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 22:18:38 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/05 19:58:29 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*new_str;
	size_t			len_str_join;
	size_t			count_join;

	if (!s1 || !s2)
		return (NULL);
	len_str_join = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	new_str = (unsigned char *)malloc((len_str_join + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	count_join = 0;
	while (*s1)
		new_str[count_join++] = *(s1++);
	while (*s2)
		new_str[count_join++] = *(s2++);
	new_str[count_join] = '\0';
	return ((char *)new_str);
}

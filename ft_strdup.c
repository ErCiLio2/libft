/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 15:26:18 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/05 19:58:40 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len_s;
	char	*new_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen((char *)s) + 1;
	new_s = (char *)malloc(len_s);
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, s, len_s);
	return (new_s);
}

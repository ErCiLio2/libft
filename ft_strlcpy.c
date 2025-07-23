/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:43:57 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/01 07:05:47 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_str;

	len_str = ft_strlen((char *)src);
	if ((!dst || !src) || size <= 0)
		return (len_str);
	while (*src && size-- > 1)
		*(dst++) = *(src++);
	*dst = 0;
	return (len_str);
}

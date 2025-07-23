/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 12:13:15 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/01 11:22:47 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	src_len;
	size_t	size_src;
	size_t	size_buffer;

	if ((!dst || !src) && size)
		return (size);
	len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	size_src = src_len;
	size_buffer = size - 1;
	if (len > size_buffer || !size)
		return (size + size_src);
	dst += len;
	src_len = 0;
	while (len + src_len < size_buffer && *src)
	{
		*(dst++) = *(src++);
		src_len++;
	}
	*dst = 0;
	return (len + size_src);
}

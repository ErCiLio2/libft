/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:53:05 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/04 21:56:10 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pt_dest;
	unsigned char	*pt_src;

	if (!src && !dest)
		return (NULL);
	pt_dest = (unsigned char *)dest;
	pt_src = (unsigned char *)src;
	while (n--)
		*(pt_dest++) = *(pt_src++);
	return (dest);
}

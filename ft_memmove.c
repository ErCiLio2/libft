/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 06:09:59 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/05 20:05:10 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pt_dest;
	unsigned char	*pt_src;

	if (!dest || !src)
		return (NULL);
	pt_dest = (unsigned char *)dest;
	pt_src = (unsigned char *)src;
	if (pt_dest > pt_src)
	{
		pt_dest += n;
		pt_src += n;
		while (n--)
			*(--pt_dest) = *(--pt_src);
	}
	else
	{
		while (n--)
			*(pt_dest++) = *(pt_src++);
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:41:22 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/04 21:52:31 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ppt_str;

	if (!s)
		return (NULL);
	ppt_str = (unsigned char *)s;
	while (n--)
	{
		if (*ppt_str == (unsigned char)c)
			return ((void *)ppt_str);
		ppt_str++;
	}
	return (NULL);
}

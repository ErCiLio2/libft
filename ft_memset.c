/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:30:56 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/01 07:05:39 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pt_str;

	if (!s)
		return (s);
	pt_str = (unsigned char *)s;
	while (n > 0)
	{
		*pt_str = (unsigned char)c;
		pt_str++;
		n--;
	}
	return (s);
}

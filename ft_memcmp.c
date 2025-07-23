/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 21:36:35 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/05 20:39:46 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str_1;
	unsigned char	*str_2;

	str_1 = (unsigned char *)s1;
	str_2 = (unsigned char *)s2;
	if (!str_1 && !str_2)
		return (0);
	if (!str_1)
		return (0 - str_2[0]);
	if (!str_2)
		return (str_1[0] - 0);
	while (n--)
	{
		if (*str_2 != *str_1)
			return (*str_1 - *str_2);
		str_1++;
		str_2++;
	}
	return (0);
}

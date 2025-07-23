/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 17:56:24 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/01 11:35:07 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_i;
	size_t	little_i;

	if (!big || !little)
		return (NULL);
	big_i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[big_i] && (big_i < len))
	{
		little_i = 0;
		while ((big[big_i + little_i] == little[little_i]) && (big_i
				+ little_i < len))
		{
			if (little[little_i + 1] == '\0')
				return ((char *)&big[big_i]);
			little_i++;
		}
		big_i++;
	}
	return (NULL);
}

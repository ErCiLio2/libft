/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 20:02:13 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/05 20:44:00 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	if (!s1 && !s2)
		return (0);
	if (s1 && !s2)
		return (*s1 - 0);
	if (!s1 && s2)
		return (0 - *s2);
	while (((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0')) && --n)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

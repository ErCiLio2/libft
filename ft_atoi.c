/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:16:32 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/04 17:24:37 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iswhitespace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		signal;
	long	number;

	signal = 1;
	number = 0;
	if (!nptr)
		return (0);
	while (ft_iswhitespace(*nptr))
		nptr++;
	if ((*nptr == '-' || *nptr == '+') && *(nptr++) == '-')
		signal *= -1;
	while (ft_isdigit(*nptr))
		number = (number * 10) + *(nptr++) - '0';
	return (number * signal);
}

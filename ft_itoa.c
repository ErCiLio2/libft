/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 12:09:26 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/05 20:03:07 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long n)
{
	int	count;

	count = 1;
	if (n > 9)
		count += ft_count_digits(n / 10);
	return (count);
}

static void	ft_set(char *str, int len, long n)
{
	while (len-- > 1)
	{
		str[len] = (n % 10) + 48;
		n /= 10;
	}
	str[len] = n + 48;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		signal;
	long	nbr;

	signal = 0;
	nbr = n;
	if (nbr < 0)
	{
		signal = 1;
		nbr *= -1;
	}
	len = ft_count_digits(nbr) + signal;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (signal)
		str[0] = '-';
	ft_set(str + signal, (len - signal), nbr);
	return (str);
}

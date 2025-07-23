/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:01:18 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/05 20:05:52 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(long nbr, int fd)
{
	if (nbr >= 10)
	{
		ft_putnbr((nbr / 10), fd);
		ft_putchar_fd(((nbr % 10) + 48), fd);
	}
	else
		ft_putchar_fd((nbr + 48), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	int		signal;

	nbr = n;
	signal = 0;
	if (nbr < 0)
	{
		signal = 1;
		nbr *= -1;
	}
	if (signal)
		ft_putchar_fd('-', fd);
	ft_putnbr(nbr, fd);
}

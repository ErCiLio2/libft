/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:53:26 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/05 17:33:12 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*allocated;

	if ((nmemb && size) && (SIZE_MAX / size) < nmemb)
		return (NULL);
	allocated = malloc(nmemb * size);
	if (!allocated)
		return (NULL);
	ft_bzero(allocated, nmemb * size);
	return ((void *)allocated);
}

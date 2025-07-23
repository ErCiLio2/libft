/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 08:30:28 by eteixeir          #+#    #+#             */
/*   Updated: 2025/07/05 19:57:02 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned char	*result;
	size_t			i;
	size_t			len;

	len = ft_strlen(s) + 1;
	result = (unsigned char *)ft_calloc(len, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (len-- > 1)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return ((char *)result);
}

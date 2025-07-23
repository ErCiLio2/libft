/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteixeir <eteixeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:57:06 by eteixeir          #+#    #+#             */
/*   Updated: 2025/06/16 17:54:39 by eteixeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ppt_last_chr;

	ppt_last_chr = 0;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			ppt_last_chr = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (ppt_last_chr);
}

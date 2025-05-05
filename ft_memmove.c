/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:33:05 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/05/05 18:24:53 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *) dest;
	s = (const char *) src;
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:38:20 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/04/25 16:01:27 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	x;

	x = 0;
	while (src[x])
	{
		if (x + 1 < size)
			dest[x] = src[x];
		if (x + 1 == size)
			dest[x] = '\0';
		x++;
	}
	dest[x] = '\0';
	return (x);
}
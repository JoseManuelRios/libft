/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:07:37 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/04/25 16:17:08 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t x;
	size_t y;

	x = 0;
	y = 0;
	while(dest[x])
	{
		x++;
	}
	while(src[y])
	{
		if(y < size)
			dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (x);
}
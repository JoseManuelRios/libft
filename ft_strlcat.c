/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:07:37 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/05/11 10:51:02 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	x;
	size_t	dest_len;
	size_t	src_len;

	x = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size < 1)
		return (src_len);
	if (dest_len >= size)
		return (src_len + size);
	while (src[x] != '\0' && x < size - dest_len - 1)
	{
		dest[dest_len + x] = src[x];
		x++;
	}
	dest[dest_len + x] = '\0';
	return (dest_len + src_len);
}
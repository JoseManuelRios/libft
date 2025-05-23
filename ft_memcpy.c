/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:44:01 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/05/02 17:53:47 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t x;
	unsigned char *s1;
	unsigned char *s2;

	x = 0;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (s1 == '\0' && s2 == '\0')
		return (NULL);
	while (x < n)
	{
		s1[x] = s2[x];
		x++;
	}
	return (dest);
}
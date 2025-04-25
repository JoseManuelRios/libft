/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:44:01 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/04/24 20:18:58 by jrios-ag         ###   ########.fr       */
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
	while (x < n)
	{
		s1[x] = s2[x];
		x++;
	}
	return (s1);
}
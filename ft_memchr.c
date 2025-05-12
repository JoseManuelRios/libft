/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:04:07 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/05/12 15:29:39 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;
	unsigned char	*s1;

	x = 0;
	s1 = (unsigned char *) s;
	while (x < n)
	{
		if (s1[x] == (unsigned char) c)
			return ((void *) &s1[x]);
		x++;
	}
	return (NULL);
}
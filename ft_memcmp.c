/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:36:08 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/05/12 15:45:38 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t x;
	unsigned char	*r1;
	unsigned char	*r2;

	x = 0;
	r1 = (unsigned char *) s1;
	r2 = (unsigned char *) s2;
	while (x < n)
	{
		if (r1[x] != r2[x])
			return (r1[x] - r2[x]);
		x++;
	}
	return (0);
}
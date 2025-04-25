/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:48:31 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/04/24 19:57:05 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	x;
	unsigned char *s1;

	x = 0;
	s1 = (unsigned char *)s;
	while (x < n)
	{
		s1[x] = (unsigned char)c;
		x++;
	}
	return (s1);
}
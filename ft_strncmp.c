/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:42:47 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/05/12 15:02:27 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	unsigned char *r1;
	unsigned char *r2;

	r1 = (unsigned char *) s1;
	r2 = (unsigned char *) s2;
	if (!r1)
		return (r1[x] - r2[x]);
	if (!r2)
		return (r1[x] - r2[x]);
	while (r1 && r2 && x < n)
	{
		if (r1[x] == '\0' || r2[x] == '\0')
			return (r1[x] - r2[x]);
		if (r1[x] != r2[x])
			return (r1[x] - r2[x]);
		x++;
	}
	return (0);
}
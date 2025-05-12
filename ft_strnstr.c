/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:46:50 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/05/12 16:46:52 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t x;
	size_t y;
	char *big2;

	x = 0;
	y = 0;
	big2 = (char *) big;
	if (little[x] == '\0')
		return (big2);
	while (big2[x] && x < len)
	{
		y = 0;
		if (big2[x] == little[y])
		{
			while (big2[x + y] == little[y] && (x + y) < len && little[y])
				y++;
			if (little[y] == '\0')
				return (&big2[x]);
		}
		x++;
	}
	return (NULL);
}
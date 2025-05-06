/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:38:20 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/05/06 13:29:28 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (src[x])
	{
		if (x < (size - 1))
			dest[x] = src[x];
		else if (x == (size - 1))
			dest[x] = '\0';
		x++;

	}
	if (x < size)
		dest[x] = '\0';
	return (x);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char dest1[20];
	char dest2[20];
	int p1;
	int p2;

	p1 = ft_strlcpy(dest1, "lorem ipsum dolor sit amet", 0);
    printf("%s. %d\n",dest1, p1);
	p2= strlcpy(dest2, "lorem ipsum dolor sit amet", 0);
	printf("%s. %d\n",dest2, p2);
	return (0);
}*/
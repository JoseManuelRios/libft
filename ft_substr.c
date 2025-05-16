/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:36:10 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/05/16 17:46:02 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	x;

	x = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (x < len)
	{
		str[x] = s[start];
		start++;
		x++;
	}
	str[x] = '\0';
	return (str);
}
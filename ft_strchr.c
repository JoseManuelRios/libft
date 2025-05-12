/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:01:32 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/05/11 11:16:51 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*c_str;

	c_str = (char *)str;
	while (*c_str)
	{
		if (*c_str == c)
			return (c_str);
		c_str++;
	}
	if (c == '\0')
		return (c_str);
	return (NULL);
}

/*int main()
{
	write(1, ft_strchr("Hola me llamo pepe", 100), 1);
	return (0);
}*/
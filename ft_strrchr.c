/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrios-ag <josemanueljbk99@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 17:34:54 by jrios-ag          #+#    #+#             */
/*   Updated: 2025/05/11 11:41:25 by jrios-ag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*found;
	char	*c_str;

	found = 0;
	c_str = (char *)str;
	while (*c_str)
	{
		if (*c_str == c)
			found = c_str;
		c_str++;
	}
	if (c == '\0')
		return (c_str);
	if (found == 0)
		return (NULL);
	return (found);
}

/*int main()
{
	write(1, ft_strrchr("Hola me llamo pepe", 100), 1);
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:34:23 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/29 16:32:42 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This function returns a pointer to the last occurrence of character in str.
// If the value is not found, the function returns a null pointer.
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (0);
}

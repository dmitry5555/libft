/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:34:48 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/29 16:32:47 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// searches for the first occurrence of the character C in the string
// pointed STR returns a pointer to the first
// occurrence of the character c in the string
// str, or NULL if the character is not found
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (unsigned char)c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:34:45 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:42:29 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strdup() and strndup() functions are used to duplicate a string.
// This function returns a pointer to a null-terminated byte string, which is
// a duplicate of the string pointed to by s.
// The memory obtained is done dynamically using malloc and hence it can
// be freed using free().
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s1);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr)
		ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}

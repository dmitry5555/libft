/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:34:26 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:46:27 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence	of the null-terminated string NEELDLE in the
// null-terminated string HAYSTACK
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	j;
	char	*ptr;

	j = 0;
	ptr = (char *)haystack;
	if (needle[j] == '\0')
		return (ptr);
	if (len == 0)
		return (0);
	n_len = ft_strlen(needle);
	while ((ptr[j] != '\0') && (j + n_len) <= len)
	{
		if (ft_strncmp(&ptr[j], needle, n_len) == 0)
			return (&ptr[j]);
		j++;
	}
	return (0);
}

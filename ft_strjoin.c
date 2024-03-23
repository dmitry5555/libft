/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrylarionov <dmitrylarionov@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:34:41 by dlariono          #+#    #+#             */
/*   Updated: 2023/04/29 19:03:53 by dmitrylario      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a new string, which is the result
// of the concatenation of ’s1’ and ’s2’.
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	l = ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
	{
		return (ft_strlen(src) + dstsize);
	}
	while (src[i] && l < dstsize - 1)
	{
		dst[l] = src[i];
		l++;
		i++;
	}
	dst[l] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	i;

	src_size = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_size);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	new_size;

	if (!s1)
		return (0);
	new_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = (char *)malloc(new_size);
	if (!new)
		return (0);
	ft_strlcpy(new, s1, new_size);
	ft_strlcat(new, s2, new_size);
	return (new);
}

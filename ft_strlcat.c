/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:34:38 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/29 15:22:19 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// appends the string pointed to by SRC to the end of the string pointed to
// by DST with the dest size DSTSIZE

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

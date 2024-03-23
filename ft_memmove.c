/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrylarionov <dmitrylarionov@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:26:06 by dlariono          #+#    #+#             */
/*   Updated: 2023/04/07 17:34:41 by dmitrylario      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies LEN characters from SRC to DST, but for overlapping memory blocks
// mmemove(dst+1,src,2)
// dst = *********   src = abcdef  res = a**def

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst1 == src1 || len == 0)
		return (dst1);
	if (src1 < dst1 && dst1 < len + src1)
		while (len--)
			dst1[len] = src1[len];
	else
		return (ft_memcpy(dst1, src1, len));
	return (dst1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:25:37 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:25:58 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies n characters from memory area src to memory area dest
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;

	if (!dst && !src)
		return (0);
	dst1 = (char *)dst;
	src1 = (char *)src;
	while (n--)
	{
		*dst1++ = *src1++;
	}
	return (dst);
}

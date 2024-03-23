/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:22:36 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/29 16:31:20 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// find first int C in the first N bytes of the string S
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)s;
	while (i < n)
	{
		if (a[i] == (unsigned char)c)
		{
			return (&a[i]);
		}
		i++;
	}
	return (0);
}

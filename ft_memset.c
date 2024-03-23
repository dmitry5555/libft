/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:27:55 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:28:26 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Writes n bytes of value c (converted to an unsigned char) to the string s.
#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	char	*c;

	c = ptr;
	while (n--)
	{
		*c++ = x;
	}
	return (ptr);
}

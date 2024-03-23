/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:24:06 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:25:25 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compare two blocks of memory
// Compares the first N bytes of the block of memory
// pointed by S1 to the first num bytes pointed by S2
// returning zero if they all match or a value different from zero representing
// which is greater if they do not.#include "libft.h"
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char *) s1;
	a2 = (unsigned char *) s2;
	while (n--)
	{
		if (*a1 != *a2)
		{
			return (*a1 - *a2);
		}
		a1++;
		a2++;
	}
	return (0);
}

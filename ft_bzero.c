/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:13:40 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 20:16:49 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Erases data by writing zeros (bytes containing '\0') to that area
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;

	c = s;
	while (n--)
	{
		*c++ = '\0';
	}
}

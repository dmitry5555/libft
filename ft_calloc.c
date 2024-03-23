/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:17:19 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/29 16:58:53 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// malloc for N elemets with SIZE
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*str;

	if (n == SIZE_MAX || size == SIZE_MAX)
		return (0);
	str = malloc(n * size);
	if (!str)
		return (0);
	ft_bzero((unsigned char *)str, n * size);
	return (str);
}

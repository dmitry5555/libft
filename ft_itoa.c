/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:21:18 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/29 20:09:43 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// malloc + converts the integer n into a character string

#include "libft.h"

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*new;
	long	nbr;
	int		size;

	size = num_len(n);
	nbr = (long)n;
	new = (char *)malloc(sizeof(char) * size + 1);
	if (!new)
		return (0);
	new[size--] = '\0';
	if (nbr == 0)
		new[0] = '0';
	if (nbr < 0)
	{
		nbr *= -1;
		new[0] = '-';
	}
	while (nbr)
	{
		new[size--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (new);
}

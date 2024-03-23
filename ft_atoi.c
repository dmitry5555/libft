/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:29:41 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/29 14:48:15 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *a)
{
	int	nb;
	int	is_neg;
	int	found;

	found = 1;
	nb = 0;
	is_neg = 1;
	while (*a == 32 || (*a >= 9 && *a <= 13))
		a++;
	if (*a == 45)
		is_neg = -1;
	if (*a == 43 || *a == 45)
		a++;
	while (*a && found)
	{
		if (*a >= '0' && *a <= '9')
			nb = nb * 10 + *a - '0';
		else
			found = 0;
		a++;
	}
	return (nb * is_neg);
}

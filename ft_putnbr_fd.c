/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:34:59 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:40:23 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the integer ’n’ to the given file descriptor.

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	x;
	int			is_neg;

	x = n;
	is_neg = 1;
	if (x < 0)
	{
		write(fd, "-", sizeof(char));
		is_neg = -1;
	}
	if (x / 10)
	{
		ft_putnbr_fd(x / 10 * is_neg, fd);
	}
	ft_putchar_fd(((x % 10) * is_neg) + '0', fd);
}

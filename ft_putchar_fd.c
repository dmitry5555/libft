/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:35:12 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:39:22 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the character ’c’ to the given file descriptor.
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, sizeof(char));
}

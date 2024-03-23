/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:19:45 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 20:23:05 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// if A is an alphanumeric character (alphabet or number) or not
#include "libft.h"

int	ft_isalnum(int a)
{
	return (ft_isdigit(a) || ft_isalpha(a));
}

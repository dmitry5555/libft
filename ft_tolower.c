/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:29:08 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:29:22 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// takes an uppercase alphabet and convert it to a lowercase character

int	ft_tolower(int a)
{
	if (65 <= a && a <= 90)
		a += 32;
	return (a);
}

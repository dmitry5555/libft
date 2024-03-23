/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:28:51 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:29:04 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// takes an lowercase alphabet and convert it to a uppercase character

int	ft_toupper(int a)
{
	if (97 <= a && a <= 122)
		a -= 32;
	return (a);
}

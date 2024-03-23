/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrylarionov <dmitrylarionov@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:29:29 by dlariono          #+#    #+#             */
/*   Updated: 2023/04/06 18:48:06 by dmitrylario      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a part of a string - string, start, length

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	new = (char *)malloc(len + 1);
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, len + 1);
	return (new);
}

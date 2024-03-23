/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:31:53 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:55:50 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and
// returns a copy of ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	size_t	beg;

	beg = 0;
	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (0);
	len = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[beg]))
	{
		beg++;
		if (beg == ft_strlen(s1))
			return (ft_strdup(""));
	}
	while (ft_strchr(set, s1[len]))
	{
		len--;
	}
	return (ft_substr(s1, beg, (len - beg + 1)));
}

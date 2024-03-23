/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlariono <dlariono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 21:34:31 by dlariono          #+#    #+#             */
/*   Updated: 2023/03/28 21:45:19 by dlariono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ to each character of the string ’s’,
// and passing its index as first
// argument to create a new string (with malloc(3)) resulting from
// successive applications of ’f’.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	new = (char *)malloc(len + 1);
	if (!new)
		return (0);
	while (i < len)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

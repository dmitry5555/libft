/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrylarionov <dmitrylarionov@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:37:42 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/04/18 21:49:21 by dmitrylario      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node.  The memory of
// ’next’ must not be freed.

#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == 0 || del == 0)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
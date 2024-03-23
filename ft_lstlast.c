/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrylarionov <dmitrylarionov@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:24:33 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/04/18 19:05:52 by dmitrylario      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns the last node of the list.
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	node = lst;
	if(!node)
		return (0);
	while(node->next)
		node = node->next;
	return (node);
}
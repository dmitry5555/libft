/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrylarionov <dmitrylarionov@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:44:57 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/04/07 17:53:40 by dmitrylario      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Counts the number of nodes in a list.
#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;
	t_list *node;

	i = 0;
	node = lst;
	while (node)
	{
		i++;
		node = node->next;
	}
	return (i);
}
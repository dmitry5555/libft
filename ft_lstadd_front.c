/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrylarionov <dmitrylarionov@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:49:32 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/04/07 17:31:09 by dmitrylario      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the node ’new’ at the beginning of the list.
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if(*lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		*lst = new;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrylarionov <dmitrylarionov@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:10:20 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/04/18 22:04:18 by dmitrylario      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  Deletes and frees the given node and every
//  successor of that node, using the function ’del’
//  and free(3).
//  Finally, the pointer to the list must be set to
//  NULL.

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*node;

	if (lst == 0 || del == 0)
		return ;
	temp = *lst;
	while (temp)
	{
		node = temp->next;
		del(temp->content);
		free(temp);
		temp = node;
	}
	*lst = 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrylarionov <dmitrylarionov@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:48:47 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/04/18 22:03:42 by dmitrylario      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.  Creates a new
// list resulting of the successive applications of
// the function ’f’.  The ’del’ function is used to
// delete the content of a node if needed.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_list;

	if (!lst||!f||!del)
		return (0);
	new_list = 0;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&temp, del);
			return (0);
		}
		ft_lstadd_back(&new_list, temp);
		lst = lst->next;
	}
	return (new_list);
}
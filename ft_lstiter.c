/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmitrylarionov <dmitrylarionov@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:37:45 by dmitrylario       #+#    #+#             */
/*   Updated: 2023/04/18 19:47:11 by dmitrylario      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		node = temp->next;
		f(temp->content);
		temp = node;
	}
}
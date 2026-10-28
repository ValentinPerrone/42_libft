/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:10:02 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/12 20:10:07 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_node;
	t_list	*pointer_next;

	if (!lst)
		return ;
	current_node = *lst;
	while (current_node != NULL)
	{
		pointer_next = current_node->next;
		del(current_node->content);
		free(current_node);
		current_node = pointer_next;
	}
	*lst = NULL;
}

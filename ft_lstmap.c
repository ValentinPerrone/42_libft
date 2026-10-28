/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:10:10 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/12 20:10:14 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_node;
	t_list	*lst_copy;
	t_list	*head_node;

	head_node = NULL;
	current_node = NULL;
	lst_copy = lst;
	while (lst_copy != NULL)
	{
		current_node = ft_lstnew(f(lst_copy->content));
		if (!current_node)
		{
			del (current_node);
			ft_lstclear(&head_node, del);
			return (NULL);
		}
		ft_lstadd_back(&head_node, current_node);
		lst_copy = lst_copy->next;
	}
	return (head_node);
}

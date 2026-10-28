/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:09:57 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/12 20:09:59 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	t_list	**lst_cpy;

	lst_cpy = lst;
	if (!lst_cpy || !new)
		return ;
	if (!*lst_cpy)
	{
		*lst_cpy = new;
		return ;
	}
	last = *lst_cpy;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
}

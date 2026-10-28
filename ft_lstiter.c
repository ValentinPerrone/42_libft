/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:10:08 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/12 20:10:09 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_cpy;

	lst_cpy = lst;
	if (!lst_cpy)
		return ;
	while (lst_cpy != NULL)
	{
		f(lst_cpy->content);
		lst_cpy = lst_cpy->next;
	}
}

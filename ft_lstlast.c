/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:09:55 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/21 14:49:21 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_cpy;

	lst_cpy = lst;
	if (!lst_cpy)
		return (NULL);
	while (lst_cpy->next != NULL)
		lst_cpy = lst_cpy->next;
	return (lst_cpy);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:47:07 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/06 21:47:11 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	mem_size;

	p = NULL;
	if (nmemb == 0 || size == 0)
	{
		p = malloc(0);
		return (p);
	}
	if (nmemb > ((size_t)-1 / size))
		return (NULL);
	mem_size = nmemb * size;
	p = malloc(mem_size);
	if (!p)
		return (NULL);
	ft_bzero (p, mem_size);
	return (p);
}

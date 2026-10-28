/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 23:25:29 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/02 23:25:31 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;
	char		character;

	p = s;
	i = 0;
	character = (char)c;
	while (i < n)
	{
		if (*p == character)
			return ((void *)p);
		p++;
		i++;
	}
	return (NULL);
}

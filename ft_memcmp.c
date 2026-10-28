/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 23:25:31 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/02 23:25:33 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*p1;
	const char	*p2;

	p1 = s1;
	p2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (p1[i] == p2[i] && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return (p2[i] - p1[i]);
}

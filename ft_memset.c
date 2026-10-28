/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:15:23 by vaperron          #+#    #+#             */
/*   Updated: 2026/09/30 14:15:25 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;

	d = s;
	i = 0;
	while (i < n)
	{
		d[i] = c;
		i++;
	}
	return (s);
}

//(unsigned char *)
//(unsigned char)
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 23:25:25 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/02 23:25:27 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	character;

	character = (char)c;
	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	while (i > 0 || *s)
	{
		if (*s == character)
			return ((char *)s);
		s--;
		i--;
	}
	if (character == '\0' && *s == character)
		return ((char *)s);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 23:25:34 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/02 23:25:37 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		j;
	size_t		i;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*big && i < len)
	{
		j = 0;
		while ((*big + j) && little[j] && big[j] == little[j] && (i + j) < len)
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)big);
		}
		big++;
		i++;
	}
	return (NULL);
}

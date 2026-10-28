/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 16:23:42 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/02 16:23:45 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	min(size_t length, size_t size)
{
	size_t	j;

	j = 0;
	while (j < length && j < size)
		j++;
	return (j);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	length;

	i = 0;
	j = 0;
	length = strlen(dst);
	while (dst[i] && i < size)
		i++;
	while ((i + 1) < size && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (size != 0 && length < size)
		dst[i] = '\0';
	return ((ft_strlen(src) + min(length, size)));
}

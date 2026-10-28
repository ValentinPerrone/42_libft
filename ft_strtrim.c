/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:08:22 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/07 15:08:23 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	int		i;
	char	*result;

	i = 0;
	size = 0;
	while (ft_strchr(set, *s1) != NULL && *s1)
		s1++;
	while (s1[size])
		size++;
	while (*s1 && ft_strchr(set, s1[size - 1]) != NULL)
		size--;
	result = malloc(size + 1);
	if (!result)
		return (NULL);
	while (i < size)
	{
		result[i] = s1[i];
		i++;
	}
	result[size] = '\0';
	return (result);
}

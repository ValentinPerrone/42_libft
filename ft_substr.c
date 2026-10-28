/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:08:14 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/07 15:08:18 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	true_size;
	char	*substring;

	true_size = 0;
	if (start > ft_strlen(s) || !s)
		substring = malloc(1);
	else
	{
		while (s[start + true_size] && true_size < len)
			true_size++;
		substring = malloc(true_size + 1);
		if (!substring)
			return (NULL);
		ft_memmove (substring, s + start, true_size);
	}
	substring[true_size] = '\0';
	return (substring);
}

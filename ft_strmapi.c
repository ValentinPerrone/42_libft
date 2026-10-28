/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:10:24 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/07 15:10:25 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_applied;

	i = 0;
	s_applied = malloc(strlen(s) + 1);
	if (!s_applied)
		return (NULL);
	while (s[i])
	{
		s_applied[i] = f(i, s[i]);
		i++;
	}
	s_applied[i] = '\0';
	return (s_applied);
}

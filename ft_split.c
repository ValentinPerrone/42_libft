/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:10:20 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/07 15:10:22 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	solv_free(int j, char **s_solved)
{
	while (j > 0)
	{
		j--;
		free(s_solved[j]);
	}
	free(s_solved);
}

static int	word_counter(char const *s, char c)
{
	int		i;
	int		word_count;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			word_count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (word_count);
}

static int	word_setter(int word_count, char c, char **s_solved, char const *s)
{
	int		j;
	int		k;

	j = 0;
	while (j < word_count)
	{
		while (*s && *s == c)
			s++;
		k = 0;
		while (s[k] && s[k] != c)
			k++;
		s_solved[j] = malloc (k + 1);
		if (!s_solved[j])
		{
			solv_free (j, s_solved);
			return (1);
		}
		ft_strlcpy(s_solved[j], s, (k + 1));
		s += k;
		j++;
	}
	s_solved[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		l;
	int		word_count;
	char	**s_solved;

	word_count = word_counter(s, c);
	s_solved = malloc((word_count + 1) * sizeof(char *));
	if (!s_solved)
		return (NULL);
	l = word_setter(word_count, c, s_solved, s);
	if (l == 1)
		return (NULL);
	return (s_solved);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:10:41 by vaperron          #+#    #+#             */
/*   Updated: 2026/10/07 15:10:48 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	*string;

	i = 0;
	string = ft_itoa(n);
	while (string[i])
	{
		ft_putchar_fd(string[i], fd);
		i++;
	}
	free(string);
}

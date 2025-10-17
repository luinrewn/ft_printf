/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 13:03:34 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/07 02:22:43 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s || fd < 0)
		return ;
	while (*s)
	{
		i = write(fd, s++, 1);
		if (i == -1)
			return ;
	}
	i = write(fd, "\n", 1);
	if (i == -1)
		return ;
}

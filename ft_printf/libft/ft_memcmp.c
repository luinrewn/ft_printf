/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:28:54 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/07 02:17:19 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s11;
	const unsigned char	*s22;

	i = 0;
	s11 = (const unsigned char *)s1;
	s22 = (const unsigned char *)s2;
	while (i < n)
	{
		if (s11[i] != s22[i])
		{
			return (s11[i] - s22[i]);
		}
		i++;
	}
	return (0);
}

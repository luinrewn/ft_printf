/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:02:44 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/09 12:43:37 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ss;

	ss = (unsigned char *)s;
	while (n--)
	{
		if (*ss == (unsigned char)c)
			return ((unsigned char *)ss);
		ss++;
	}
	return (NULL);
}
/*
#include <string.h>
int	main(void)
{
	char	str[50] = "Hello World!";
	printf("ft_memchr: %s\n", (char *)ft_memchr(str, 'o', 5));
	printf("memchr:    %s\n", (char *)memchr(str, 'o', 5));
}
*/

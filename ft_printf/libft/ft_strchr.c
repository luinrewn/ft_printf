/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:02:44 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/09 15:02:05 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c && *s)
		s++;
	if (*s == '\0' && (unsigned char)c != '\0')
		return (NULL);
	return ((char *)s);
}
/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
    const char	str[] = "Hello, world!";
	printf("Test with '\\0': %s\n", ft_strchr(str, '\0'));
	printf("Test with 'o': %s\n", ft_strchr(str, 'o'));
	printf("Test with 'z': %s\n", ft_strchr(str, 'z'));
	return (0);
}
*/

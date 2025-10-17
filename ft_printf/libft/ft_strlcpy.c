/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:53:50 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/09 12:23:00 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (size == 0)
		return (j);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
    char dest[20];
    char dest2[20];
    const char *src = "HelloWorld";
    const char *src2 = "HelloWorld";

    size_t n1 = ft_strlcpy(dest, src, sizeof(dest));
    size_t n2 = strlcpy(dest2, src2, sizeof(dest2));

    printf("ft_strlcpy result: %s, return: %zu\n", dest, n1);
    printf("   strlcpy result: %s, return: %zu\n", dest2, n2);

    // Edge cases
    char dest3[5];
    size_t n3 = ft_strlcpy(dest3, "ABCDEFGHIJ", sizeof(dest3));
    printf("ft_strlcpy (small buffer): %s, return: %zu\n", dest3, n3);
	// Should copy "ABCD" + '\0', return 10

    char dest4[0];
    char dest5[0];
    size_t n4 = ft_strlcpy(dest4, "Test", 0); // Should return 4, do no writing
    size_t n5 = strlcpy(dest5, "Test", 0); // Should return 4, do no writing
    printf("ft_strlcpy (size 0): return: %zu\n", n4);
    printf("   strlcpy (size 0): return: %zu\n", n5);

    return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:13:33 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/11 13:15:12 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[10] = "string";
	ft_memmove(src + 2, src, 99);
	printf("%s \n", src);

	char src1[10] = "string";
	memmove(src1 + 2, src1, 99);
	printf("%s \n", src1);

	char src2[10] = "string";
	char dest[10];
	ft_memmove(dest, src2, 7);
	printf("%s \n", dest);

	char src3[10] = "string";
	char dest1[10] = "abcdef";
	ft_memmove(dest1, src3, 6);
	printf("%s \n", dest);

}
*/

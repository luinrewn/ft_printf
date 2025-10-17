/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 14:55:37 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/09 11:32:28 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ss;

	ss = (unsigned char *)s;
	while (n--)
		*ss++ = (unsigned char)c;
	return (s);
}
/*
#include <stdio.h>
//s += i++;
//n!=0
// *ss
// *ss++;
#include <string.h>
int	main(void)
{
	char str[] = "String";
	ft_memset(str, 48, 5);
	printf("%s", str);
}
*/

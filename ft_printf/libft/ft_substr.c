/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:10:19 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/09 14:59:31 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	length_of_s;

	length_of_s = ft_strlen(s);
	if (length_of_s < start)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		return (sub[0] = '\0', sub);
	}
	if ((start + len) > length_of_s)
		len = length_of_s - start;
	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub[i] = '\0', sub);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str = "Hello World Hello WOrld Hello WOrdl aaaaaaaa";
	char *s = ft_substr(str, 10000, 42000000);
	printf("%s", s);
	free(s);
}
// a b c d e f g |# #
// 1 2 3 4 5 6 7 |8 9
//       ^
//to copy: 4
//       . . . .
*/

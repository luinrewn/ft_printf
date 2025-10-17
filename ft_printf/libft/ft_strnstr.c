/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:48:09 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/09 12:32:29 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)(big));
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && little[j] && big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)(&big[i]));
		i++;
	}
	return (NULL);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
char	*result = ft_strnstr(argv[1], argv[2], atoi(argv[3]));
	if (result)
		printf("%s", result);
	return 0;
}
*/

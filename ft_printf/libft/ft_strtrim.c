/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 03:40:14 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/09 15:29:44 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cset(const char *set, char c)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static char	*empty(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	return (str[0] = '\0', str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	char		*str;
	size_t		k;
	size_t		len;

	i = 0;
	while (s1[i] && cset(set, s1[i]))
		i++;
	j = ft_strlen((char *)s1);
	while (j > 0 && cset(set, s1[j - 1]))
		j--;
	if (j <= i)
		return (empty());
	len = j - i;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	k = 0;
	while (k < len)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char *s = ft_strtrim("   xxx   xxx", " x");
	printf("%s", s);
}
*/

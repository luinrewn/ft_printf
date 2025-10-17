/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:56:45 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/06 18:02:18 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*put(const char *s, char c, int i)
{
	int		count;
	char	*str;
	int		j;
	int		benigning;

	count = 0;
	j = 0;
	benigning = i;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	str = (char *)malloc(count + 1);
	if (!str)
		return (NULL);
	while (j < count)
	{
		str[j] = s[benigning + j];
		j++;
	}
	str[count] = '\0';
	return (str);
}

static char	**free_mem(char **result, int line)
{
	int	i;

	i = 0;
	while (i < line)
		free(result[i++]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		line;

	result = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!result)
		return (NULL);
	line = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			result[line++] = put(s, c, i);
			if (!result[line - 1])
				return (free_mem(result, line - 1));
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (result[line] = NULL, result);
}

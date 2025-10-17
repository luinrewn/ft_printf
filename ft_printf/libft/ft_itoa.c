/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 22:49:31 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/06 17:54:44 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*res;
	int		len;

	num = n;
	len = count(num);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	if (num == 0)
		return (res[0] = '0', res[1] = '\0', res);
	if (num < 0)
		num = -num;
	res[len] = '\0';
	while (num > 0)
	{
		res[--len] = ((num % 10) + '0');
		num /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

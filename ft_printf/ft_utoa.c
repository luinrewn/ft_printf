/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 22:49:31 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/17 03:41:20 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int n)
{
	unsigned long	num;
	char			*res;
	int				len;

	num = n;
	len = count(num);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	if (num == 0)
		return (res[0] = '0', res[1] = '\0', res);
	res[len] = '\0';
	while (num > 0)
	{
		res[--len] = ((num % 10) + '0');
		num /= 10;
	}
	return (res);
}

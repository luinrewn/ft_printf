/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:21:09 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/17 03:54:41 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	print_s(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (len);
}

int	print_d(int num)
{
	int		len;
	char	*str;

	str = ft_itoa(num);
	if (!str)
		return (0);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}

int	print_u(unsigned int num)
{
	int		len;
	char	*str;

	str = ft_utoa(num);
	if (!str)
		return (0);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}

static char	*modes(int mode)
{
	char	*set;
	char	*set2;

	set = "0123456789abcdef";
	set2 = "0123456789ABCDEF";
	if (mode == 1)
		return (set);
	if (mode == 2)
		return (set2);
	return (set);
}

int	print_x(unsigned long long num, int mode)
{
	char	*set;
	char	hex[17];
	int		len;
	int		i;

	hex[16] = '\0';
	i = 16;
	len = 0;
	set = modes(mode);
	if (!num)
		return (write(1, "0", 1));
	while (num > 0)
	{
		hex[--i] = set[num % 16];
		num /= 16;
		len++;
	}
	ft_putstr_fd(&hex[i], 1);
	return (len);
}

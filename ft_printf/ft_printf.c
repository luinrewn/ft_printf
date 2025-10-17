/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 14:54:04 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/17 04:55:18 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	print_p(void *ptr)
{
	uintptr_t	addr;

	addr = (uintptr_t)ptr;
	if (!addr)
		return (write(1, "(nil)", 5));
	ft_putstr_fd("0x", 1);
	return (print_x(addr, 1) + 2);
}

int	parse(const char *format, va_list args)
{
	if (*format == '%')
		return (write(1, "%", 1));
	if (*format == 'c')
		return (ft_putchar_fd(((char)va_arg(args, int)), 1), 1);
	else if (*format == 's')
		return (print_s(va_arg(args, char *)));
	else if (*format == 'd' || *format == 'i')
		return (print_d(va_arg(args, int)));
	else if (*format == 'u')
		return (print_u(va_arg(args, unsigned long)));
	else if (*format == 'x')
		return (print_x(va_arg(args, unsigned long), 1));
	else if (*format == 'X')
		return (print_x(va_arg(args, unsigned int), 2));
	else if (*format == 'p')
		return (print_p(va_arg(args, void *)));
	format++;
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		written;

	written = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%' && (*format + 1))
		{
			format++;
			written += parse(format++, args);
		}
		else
		{
			ft_putchar_fd(*format++, 1);
			written++;
		}
	}
	return (written);
}

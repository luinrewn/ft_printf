/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprokope <mprokope@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:48:41 by mprokope          #+#    #+#             */
/*   Updated: 2025/10/17 03:54:55 by mprokope         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		print_u(unsigned int num);
int		print_s(char *str);
int		print_d(int num);
char	*ft_utoa(unsigned int n);
int		ft_printf(const char *format, ...);
int		print_x(unsigned long long num, int mode);
int		print_p(void *ptr);

#endif

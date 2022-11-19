/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: SarahLouise <SarahLouise@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/05 11:04:40 by smclacke      #+#    #+#                 */
/*   Updated: 2022/11/19 13:52:21 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	print_char(int c)
{
	write (1, &c, 1);
	return (1);
}

int	print_string(char *str)
{
	if (!str)
	{
		write(1, "0", 1);
		return (0);
	}
	write(1, str, ft_strlen(str));
	return (ft_strlen(str));
}

int	ft_eval_format(char *str, va_list valist)
{
	if (*str == 'c')
		return (print_char(va_arg(valist, int)));
	if (*str == 's')
		return (print_string(va_arg(valist, char *)));
	if (*str == 'p')
	{
		write(1, "0x", 2);
		return (print_p(va_arg(valist, long long), 16));
	}
	if (*str == 'd' || *str == 'i')
		return (print_nbr(va_arg(valist, int), 10));
	if (*str == 'u')
		return (print_nbr(va_arg(valist, unsigned int), 10));
	if (*str == 'x')
		return (print_nbr(va_arg(valist, unsigned int), 16));
	if (*str == 'X')
		return (print_nbr2(va_arg(valist, unsigned int), 16));
	if (*str == '%')
	{
		write(1, "%", 1);
	}
	str++;
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	valist;
	int		char_count;

	va_start(valist, (char *)str);
	char_count = 0;
	while (*str)
	{
		while (*str != '%' && *str)
		{
			char_count += write(1, str, 1);
			str++;
		}
		if (*str == '%')
		{
			char_count += ft_eval_format((char *)str + 1, valist);
			str++;
		}
		str++;
	}
	va_end(valist);
	return (char_count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: SarahLouise <SarahLouise@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/05 11:04:40 by smclacke      #+#    #+#                 */
/*   Updated: 2022/11/15 19:23:28 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_eval_format(const char *str, va_list valist)
{
	if (*str == 'c')
		return (print_char(va_arg(valist, int)));
	if (*str == 's')
		return (print_string(va_arg(valist, char *)));
	if (*str == 'p')
	{
		write(1, "0x", 2);
		return (print_p(va_arg(valist, unsigned long), "0123456789abcdef"));
	}
	if (*str == 'd' || *str == 'i')
		return (print_nbr(va_arg(valist, int), "0123456789"));
	if (*str == 'u')
		return (print_un(va_arg(valist, unsigned int), "0123456789"));
	if (*str == 'x')
		return (print_un(va_arg(valist, long), "0123456789abcdef"));
	if (*str == 'X')
		return (print_un(va_arg(valist, long), "0123456789ABCDEF"));
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

	va_start(valist, str);
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
/* 
int	main(void)
{
	int				c = 'G';
	int				i = 89;
	char			*str = "a string";

	printf("haykf%%gjjg, %c%d%s\n", c, i, str);
	ft_printf("haykf%%gjjg, %c%d%s\n", c, i, str);
}
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SarahLouise <SarahLouise@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 11:04:40 by smclacke          #+#    #+#             */
/*   Updated: 2022/11/17 15:03:23 by SarahLouise      ###   ########.fr       */
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

// int main(void)
// {
//     int                    c = 'G';
//     int                    d = 89;
//     char               *str = "a string";
//     long long             i = -9873458;
//     unsigned long         X = 349886;
//     unsigned long         x = 349886;
//     long long             i = 349886;
//     unsigned long         u = 9847;
//     unsigned long long          X = 857698493487;
//     unsigned long long    p = 3498;

// /*  printf("haykf%%gjjg, %c%d%s%i\n", c, d, str, i); */
//     ft_printf("GIVE ME THE UPPER HEXA: %X\nGIVE ME THE LOWER HEXA: %x\nGIVE ME THE DECA: %i\n", X, x, i);
//     ft_printf("Can I get some caps? %X\n", X);
//     ft_printf("%u\n", u);
// }

// int main()
// {
// 	int x = 1997;
// 	int j = 1882;
// 	int *ptr = &x;
	
// 	x = j;
// 	j = x;
	
// 	printf("The address is: %p, the value is %d\n", ptr, *ptr);
// 	ft_printf("The address is: %p, the value is %d\n", ptr, *ptr);
// }

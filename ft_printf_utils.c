/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SarahLouise <SarahLouise@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:12:40 by smclacke          #+#    #+#             */
/*   Updated: 2022/11/17 13:49:58 by SarahLouise      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(unsigned long long n, unsigned int base)
{
	int   i;

	i = 1;
	if (n >= base)
	{
		print_p(n / base, base);
	}
	print_char((n % base) + '0');
	return (i);
}

void    putchar_lower(char c)
{
	if (c == 58)
		write(1, "a", sizeof(char));
	else if (c == 59)
		write(1, "b", sizeof(char));
	else if (c == 60)
		write(1, "c", sizeof(char));
	else if (c == 61)
		write(1, "d", sizeof(char));
	else if (c == 62)
		write(1, "e", sizeof(char));
	else if (c == 63)
		write(1, "f", sizeof(char));
	else
		write(1, &c, 1);
}

void    putchar_upper(char c)
{
	if (c == 58)
		write(1, "A", sizeof(char));
	else if (c == 59)
		write(1, "B", sizeof(char));
	else if (c == 60)
		write(1, "C", sizeof(char));
	else if (c == 61)
		write(1, "D", sizeof(char));
	else if (c == 62)
		write(1, "E", sizeof(char));
	else if (c == 63)
		write(1, "F", sizeof(char));
	else
		write(1, &c, 1);
}

int	print_nbr(long long n, int base)
{
	int i;

	i = 1;
	if (n < 0 && base == 10)
	{
		n *= -1;
		write (1, "-", sizeof(char));
	}
	if (n >= base)
		print_nbr(n / base, base);
	putchar_lower((n % base) + '0');
	return (i);
}

int	print_nbr2(unsigned long long n, unsigned int base)
{
	int		i;

	i = 1;
	if (n >= base)
		print_nbr2(n / base, base);
	putchar_upper((i % base) + '0');
	return (i);
}
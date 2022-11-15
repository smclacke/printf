/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: SarahLouise <SarahLouise@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 18:12:40 by smclacke      #+#    #+#                 */
/*   Updated: 2022/11/15 19:23:19 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	print_p(unsigned long n, char *base)
{
	unsigned long	unl;
	int				i;

	i = 1;
	unl = ft_strlen(base);
	if (n >= unl)
		print_p(n / unl, base);
	write (1, &base[n % unl], 1);
	while (n >= unl)
	{
		n /= unl;
		i++;
	}
	return (i);
}

int	print_nbr(int n, char *base)
{
	long			l;
	int				i;
	unsigned int	un;

	i = 0;
	if (n < 0)
	{
		write (1, "-", 1);
		un = -n;
		i++;
	}
	else
		un = n;
	l = ft_strlen(base);
	if (un >= l)
		print_nbr(un / l, base);
	write (1, &base[un % l], 1);
	while (un >= l)
		un /= l;
		i++;
	return (i);
}

int	print_un(unsigned int n, char *base)
{
	long	l;
	int		i;

	i = 1;
	l = ft_strlen(base);
	if (n >= l)
		print_un(n / l, base);
	write (1, &base[n % l], 1);
	while (n >= l)
	{
		n /= l;
		i++;
	}
	return (i);
}

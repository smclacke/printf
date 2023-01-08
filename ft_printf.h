/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/24 15:47:41 by smclacke      #+#    #+#                 */
/*   Updated: 2023/01/08 14:54:23 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "ft_printf.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int			ft_printf(const char *str, ...);

size_t		ft_strlen(const char *s);

int			print_nbr(long long n, int base);

int			print_nbr2(unsigned long long n, unsigned int base);

int			print_p(unsigned long long n, unsigned int base);

#endif

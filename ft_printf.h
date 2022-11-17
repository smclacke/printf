/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SarahLouise <SarahLouise@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:58:29 by smclacke          #+#    #+#             */
/*   Updated: 2022/11/17 13:56:05 by SarahLouise      ###   ########.fr       */
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

int			print_char(int c);

int			print_string(char *str);

int	        print_p(unsigned long long n, unsigned int base);

void        putchar_lower(char c);

void        putchar_upper(char c);

int	        print_nbr(long long n, int base);

int	        print_nbr2(unsigned long long n, unsigned int base);

#endif

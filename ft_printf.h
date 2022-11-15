/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: SarahLouise <SarahLouise@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/07 13:58:29 by smclacke      #+#    #+#                 */
/*   Updated: 2022/11/15 19:35:22 by smclacke      ########   odam.nl         */
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

int			print_p(unsigned long n, char *base);

int			print_nbr(int n, char *base);

int			print_un(unsigned int n, char *base);

#endif

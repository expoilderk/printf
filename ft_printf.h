/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 22:36:56 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/14 23:04:00 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#define DECIMAL "0123456789"
#define HEX_LOW "0123456789abcdef"
#define HEX_UPPER "0123456789ABCDEF"


int	ft_printf(const char *format, ...);

int	is_args(int c);

int scan_args(char format, va_list args);

int	print_str(char *s);

int	print_char(char c);

int	print_nbr(int nb);

int	print_ui(unsigned int nb);

int	print_hexa(unsigned int nb, char *base);

int	print_pointer(unsigned long long ptr, char *base);

int	print_percent(char c);


//Alternativa generica
int	print_base(unsigned int nb, char format, char *base);


size_t	ft_strlen(const char *str);


#endif // FT_PRINTF_H

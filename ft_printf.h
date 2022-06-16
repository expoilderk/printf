/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 22:36:56 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/15 23:12:50 by mreis-me         ###   ########.fr       */
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


//Alternativa generica para base 10 ou 16
int	print_base(unsigned int nb, char format, char *base);


//Usando minha função allocate
int	print_pointer_alloc(unsigned long long ptr, char *base);
int print_hexa_alloc(unsigned int nb, char *base);
int	print_ui_alloc(unsigned int nb);


//Usando minha função itoa_base
int	print_pointer_itoa(unsigned long long ptr, char *base);
int print_hexa_itoa(unsigned int nb, char *base);
int	print_ui_itoa(unsigned int nb, char *base);
int	print_nbr_itoa(int nb, char *base);


//Utils
void    *allocate(unsigned int nb, int base);
size_t	ft_strlen(const char *str);
char    *itoa_base(unsigned long long nb, char *base);
char	*ft_strdup(const char *s1);

#endif // FT_PRINTF_H

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:07:06 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/15 07:36:01 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int scan_args(char format, va_list args)
{
		int count;

		count = 0;
		if (format == 'c')
			count += print_char(va_arg(args, int));
		else if (format == 's')
			count += print_str(va_arg(args, char *));
		else if (format == 'i' || format == 'd')
			count += print_nbr(va_arg(args, int));
		else if (format == 'u')
			count += print_base(va_arg(args, unsigned int), format, DECIMAL);
		else if (format == 'p')
			count += print_pointer(va_arg(args, unsigned long long), HEX_LOW);
		else if (format == 'x')
			count += print_hexa_alloc(va_arg(args, unsigned int), HEX_LOW);
		else if (format == 'X')
			count += print_base(va_arg(args, unsigned int), format, HEX_UPPER);
		else if (format == '%')
			count += print_percent(va_arg(args, int));
	return (count);
}

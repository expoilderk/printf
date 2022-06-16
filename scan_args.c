/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:07:06 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/16 10:38:58 by mreis-me         ###   ########.fr       */
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
			count += print_nbr_itoa(va_arg(args, int));
		else if (format == 'u')
			count += print_ui_itoa(va_arg(args, unsigned int), DECIMAL);
		else if (format == 'p')
			count += print_pointer_itoa(va_arg(args, unsigned long long), HEX_LOW);
		else if (format == 'x')
			count += print_hexa_itoa(va_arg(args, unsigned int), HEX_LOW);
		else if (format == 'X')
			count += print_hexa_itoa(va_arg(args, unsigned int), HEX_UPPER);
		else if (format == '%')
			count += print_percent(va_arg(args, int));
	return (count);
}

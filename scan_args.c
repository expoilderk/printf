/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:07:06 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/14 08:47:27 by mreis-me         ###   ########.fr       */
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
			write(1, "unsiged int", 11);
		else if (format == 'p')
			write(1, "pointer", 7);
		else if (format == 'x')
			write(1, "hexadecimal", 11);
		else if (format == 'X')
			write(1, "HEXADECIMAL", 11);
		else if (format == '%')
			count += print_percent(va_arg(args, int));
	return (count);
}

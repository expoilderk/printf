/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:07:06 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/14 10:53:38 by mreis-me         ###   ########.fr       */
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
			count += print_ui(va_arg(args, unsigned int));
			//write(1, "unsiged int", 11);
		else if (format == 'p')
			write(1, "pointer", 7);
		else if (format == 'x')
			count += print_hexa(va_arg(args, long long int), HEX);
		else if (format == 'X')
			count += print_hexa(va_arg(args, long long int), HEX_UPPER);
		else if (format == '%')
			count += print_percent(va_arg(args, int));
	return (count);
}

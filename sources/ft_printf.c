/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 18:54:33 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/09 19:00:50 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//Remover depois dos testes
#include <string.h>
#include <limits.h>

int ft_printf(const char *format, ...)
{
	va_list args;
	int count;
	int index;
	va_start(args, format);

	count = 0;
	index = 0;
	while (format[index])
	{
		if (format[index] == '%')
		{
			index++;
			if(is_args(format[index]))
				count += scan_args(format[index], args);
		}
		else if (format[index])
			count += print_char(format[index]);
		index++;
	}
	va_end(args);
	return (count);
}

//Tests
int main()
{
    int re;
    //re = ft_printf("My ft_printf: \nInteiro | %d |\nString | %s |\nChar | %c |\nPorcent | %% |", 42, "Cadete", 'G');
	re = ft_printf("%s", "teste");
    printf("\nForam impressos %d caracteres\n", re);

    return (0);
}

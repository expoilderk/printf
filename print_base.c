/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:53:08 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/14 22:05:35 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_base(unsigned int nb, char format, char *base)
{
	char			arr[20];
	unsigned int	temp;
	int				size;
	int				count;

	size = 0;
	count = 0;
	if (nb == 0)
		count += print_char('0');
	temp = nb;
	while (temp > 0)
	{
		if (format == 'x' || format == 'X')
		{
			arr[size++] = base[temp % 16];
			temp /= 16;
		}
		else
		{
			arr[size++] = temp % 10 + '0';
			temp /= 10;
		}
	}
	size--;
	while (size >= 0)
		count += print_char(arr[size--]);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:43:28 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/14 23:03:17 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa(unsigned int nb, char *base)
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
		arr[size++] = base[temp % 16];
		temp /= 16;
	}
	size--;
	while (size >= 0)
		count += print_char(arr[size--]);
	return (count);
}

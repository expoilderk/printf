/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:43:28 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/14 22:15:45 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int nb)
{
	char			arr[15];
	unsigned int	temp;
	int				size;
	int				count;

	size = 0;
	count = 0;
	temp = nb;
	if (nb < 0)
	{
		temp *= -1;
		count += print_char('-');
	}
	if (nb == 0)
		count += print_char(nb + '0');
	while (temp > 0)
	{
		arr[size++] = temp % 10 + '0';
		temp /= 10;
	}
	size--;
	while (size >= 0)
		count += print_char(arr[size--]);
	return (count);
}

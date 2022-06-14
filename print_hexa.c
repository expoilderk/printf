/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:43:28 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/14 11:12:08 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa(long long int nb, char *hex)
{
	char			arr[20];
	long long int	temp;
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
		count += print_char(nb + 48);
	while (temp > 0)
	{
		arr[size++] = hex[temp % 16];
		temp /= 16;
	}
	count += print_str(arr);
	return (count);
}

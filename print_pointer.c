/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:14:25 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/18 20:05:47 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long long ptr, char *base)
{
	char				arr[20];
	unsigned long long	temp;
	int					size;
	int					count;

	size = 0;
	count = 0;
	count += print_str("0x");
	if (ptr == 0)
		count += print_str("0");
	temp = ptr;
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

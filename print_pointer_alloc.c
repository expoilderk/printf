/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer_alloc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:14:25 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/15 08:12:36 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer_alloc(unsigned long long ptr, char *base)
{
	char				*arr;
	unsigned long long	temp;
	int					size;
	int					count;

	size = 0;
	count = 0;

	count += print_str("0x");
	if (ptr == 0)
		count += print_str("0");
	arr = allocate(ptr, 16);
	temp = ptr;
	while (temp > 0)
	{
		arr[size++] = base[temp % 16];
		temp /= 16;
	}
	size--;
	while (size >= 0)
		count += print_char(arr[size--]);
	free(arr);
	return (count);
}

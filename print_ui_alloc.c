/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ui_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:43:28 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/15 08:15:09 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ui_alloc(unsigned int nb)
{
	char			*arr;
	unsigned int	temp;
	int				size;
	int				count;

	size = 0;
	count = 0;
	if (nb == 0)
		count += print_char('0');
	arr = allocate(nb, 10);
	temp = nb;
	while (temp > 0)
	{
		arr[size++] = temp % 10 + '0';
		temp /= 10;
	}
	size--;
	while (size >= 0)
		count += print_char(arr[size--]);
	free(arr);
	return (count);
}

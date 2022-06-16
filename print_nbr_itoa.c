/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 09:43:28 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/16 00:16:56 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr_itoa(int nb, char *base)
{
	char			*arr;
	int				count;

	count = 0;
	/*if (nb < 0)
	{
		nb *= -1;
		count += print_char('-');
	}*/
	if (nb < 0)
		count += print_char('-');
	arr = itoa_base(nb, base);
	count += print_str(arr);
	free(arr);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer_itoa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:14:25 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/16 11:38:29 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer_itoa(unsigned long long ptr, char *base)
{
	char	*arr;
	int		count;
	
	count = 0;
	count += print_str("0x");
	arr = itoa_base(ptr, base);
	//arr = ft_itoa_hexa(ptr, base);
	count += print_str(arr);
	free(arr);
	return (count);
}

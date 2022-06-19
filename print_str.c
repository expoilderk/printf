/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 23:50:19 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/18 21:50:09 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
	{
		count += print_str("(null)");
		return (count);
	}
	while (s[count])
	{
		write(1, &s[count], 1);
		count++;
	}
	return (count);
}

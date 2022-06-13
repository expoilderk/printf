/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:02:44 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/12 01:05:52 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_percent(char c)
{
	int count;
	(void)c;

	count = 0;
	write(1, "%", 1);
	count += 1;

	return (count);
}

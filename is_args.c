/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 20:14:38 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/18 21:41:25 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_args(int c)
{
	return (c == 'c' || c == 's' || c == 'i' || c == 'd' || c == 'u' || \
			c == 'p' || c == 'x' || c == 'X' || c == '%');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:51:11 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/16 11:00:19 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_nbrlen(unsigned long long n)
{
	int	nlen;

	nlen = 0;
	if (n <= 0)
		nlen++;
	while (n != '\0')
	{
		nlen++;
		n = n / 16;
	}
	return (nlen);
}

char	*ft_itoa_hexa(unsigned long long n, char *base)
{
	int			nlen;
	unsigned long long	nb;
	char		*str;

	nlen = ft_nbrlen(n);
	nb = n;
	str = malloc(sizeof(char) * nlen + 1);
	if (!str)
		return (0);
	if (nb == 0)
		str[0] = '0';
	str[nlen--] = '\0';
	while (nb)
	{	
		str[nlen] = base[nb % 16];
		nlen--;
		nb = nb / 16;
	}
	return (str);
}
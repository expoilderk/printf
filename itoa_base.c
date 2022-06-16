/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 22:38:37 by mreis-me          #+#    #+#             */
/*   Updated: 2022/06/15 22:38:37 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	char    *zero;
	size_t	size_in_bytes;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	size_in_bytes = count * size;
	p = malloc(size_in_bytes);
	if (!p)
		return (0);
	zero = p;
	while (size_in_bytes != 0)
	{
		*zero++ = 0;
		size_in_bytes--;
	}
	return (p);
}

static size_t ft_nbrlen(unsigned long long nb, char *base)
{
	size_t				nlen;
	unsigned long long	blen;

	nlen = 1;
	blen = ft_strlen(base);
	while (nb >= blen)
	{
		nb = nb / blen;
		nlen++;
	}
	return (nlen);
}

char	*itoa_base(unsigned long long nb, char *base)
{
    char *str;
    int nlen;
    unsigned long long blen;

    blen = ft_strlen(base);
    nlen = ft_nbrlen(nb, base);
    str = ft_calloc((nlen + 1), sizeof(char));
    if (!str)
        return (NULL);
    while(nlen > 0)
    {
        nlen -= 1;
        str[nlen] = base[nb % blen];
        nb /= blen;
    }
    return (str);
}

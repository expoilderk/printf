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

static size_t ft_nbrlen(long long int n, int base)
{
    int    nlen;

    nlen = 0;
    if (n <= 0)
        nlen++;
    while (n != '\0')
    {
        nlen++;
        n = n / base;
    }
    return (nlen);
}

void *allocate(unsigned int nb, int base)
{
    void *str;
    int len;

    len = ft_nbrlen(nb, base);
    str = ft_calloc((len + 1), sizeof(char));
    return (str);
}
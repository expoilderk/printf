#include "ft_printf.h"

int    print_hexa_itoa(unsigned int nb, char *base)
{
    char    *arr;
    int     count;

    count = 0;
    if (nb == 0)
        count += print_char('0');
    arr = itoa_base(nb, base);
    count += print_str(arr);
    free(arr);
    return (count);
}
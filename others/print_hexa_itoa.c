#include "ft_printf.h"

int    print_hexa_itoa(unsigned int nb, char *base)
{
    char    *arr;
    int     count;

    count = 0;
    //arr = ft_itoa_hexa(nb, base);
    arr = itoa_base(nb, base);
    count += print_str(arr);
    free(arr);
    return (count);
}
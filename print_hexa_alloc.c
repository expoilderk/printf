#include "ft_printf.h"

int    print_hexa_alloc(unsigned int nb, char *base)
{
    char            *arr;
    unsigned int    temp;
    int                size;
    int                count;

    size = 0;
    count = 0;
    if (nb == 0)
        count += print_char('0');
    arr = allocate(nb, 16);
    temp = nb;
    while (temp > 0)
    {
        arr[size++] = base[temp % 16];
        temp /= 16;
    }
    size--;
    while (size >= 0)
        count += print_char(arr[size--]);
    free(arr);
    return (count);
}
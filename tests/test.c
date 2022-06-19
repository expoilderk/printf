#include <string.h>
#include <limits.h>
#include <stdio.h>
#include "../ft_printf.h"

//Tests
int main()
{
    int re;

//	printf("FUNÇÃO CRIADA\n");
//	re = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
//    printf("\nForam impressos %d caracteres\n\n", re);

//	printf("FUNÇÃO ORIGINAL\n");
//	re = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
//	printf("\nForam impressos %d caracteres\n", re);

	int *p = 0;

	printf("FUNÇÃO CRIADA\n");
	re = ft_printf("%p", p);
	printf("\nForam impressos %d caracteres\n\n", re);

	printf("FUNÇÃO ORIGINAL\n");
	re = printf("%p", p);
	printf("\nForam impressos %d caracteres\n", re);

    return (0);
}

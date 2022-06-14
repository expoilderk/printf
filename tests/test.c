#include <string.h>
#include <limits.h>

//Tests
int main()
{
    int re;
    //re = ft_printf("My ft_printf: \nInteiro | %d |\nString | %s |\nChar | %c |\nPorcent | %% |", 42, "Cadete", 'G');
	re = ft_printf("%s", "teste");
    printf("\nForam impressos %d caracteres\n", re);

    return (0);
}

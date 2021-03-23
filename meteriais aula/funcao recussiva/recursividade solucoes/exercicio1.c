#include <stdio.h>

int multiplicacao(int a, int b)
{
    if( b == 0)
    {
        return 0;
    }
    else
    {
        return a + multiplicacao(a,b-1);
    }
}
int main()
{
    printf("Multiplicacao: %i\n", multiplicacao(6,6));

    return 0;
}

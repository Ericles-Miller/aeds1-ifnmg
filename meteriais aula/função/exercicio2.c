#include <stdio.h>

int pos_neg(int N)
{
    if( N >= 0)
    {
        return 1;
    }
    else
    {
      return 0;
    }
}

int main()
{
    int r,x;

    printf("Digite valor: ");
    scanf("%i",&x);

    r = pos_neg(x);
    printf("Resultado: %i\n", r);
    printf("Resultado: %i\n", pos_neg(-9));
    return 0;
}


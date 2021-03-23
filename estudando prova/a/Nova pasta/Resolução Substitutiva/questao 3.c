#include <stdio.h>
#include <string.h>

float potencia(int base, int exp)
{
    if(exp == 0 )
    {
        return 1;
    }
    else
    if( exp > 0)
    {
        return base * potencia(base, exp-1);
    }
    else
    {
        exp = -exp;
        return 1 / ( base * potencia(base,exp-1) );
    }

}
int main()
{
    int b = 3, e = -3;

    printf("potencia: %.4f\n", potencia(b,e));

    return 0;
}

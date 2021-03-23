#include <stdio.h>

int soma(int N)
{
    if(N == 1)
    {
        return 1;
    }
    else
    {
        return N +  soma(N-1);
    }

}


int main()
{
    printf("Soma: %i\n", soma(5));

    return 0;
}

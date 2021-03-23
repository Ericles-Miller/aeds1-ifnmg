#include <stdio.h>

int fat(int N)
{
    if(N == 0 || N == 1)
    {
        return 1;
    }
    else
    {
        return N *  fat(N-1);
    }

}


int main()
{
    printf("Soma: %i\n", fat(5));

    return 0;
}

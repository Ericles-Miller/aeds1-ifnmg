#include <stdio.h>
#include <string.h>

int menor(int *v, int t)
{
    int m;
    if( t == 1)
    {
        return v[0];
    }
    else
    {
        m = menor(v,t-1);
        if(m < v[t-1])
        {
            return m;
        }
        else
        {
            v[t-1];
        }
    }
}
int main()
{
    int i, vetor[10]={-3,5,7,9,-1,2,0,4,8,-6};

    printf("Menor: %i\n", menor(vetor,10));

    return 0;
}

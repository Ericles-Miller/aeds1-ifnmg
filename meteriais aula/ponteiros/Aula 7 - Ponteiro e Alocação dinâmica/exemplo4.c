#include <stdio.h>

#define N 5

int main()
{
    int i, v[10],*pv=NULL;
    pv = v;

    for(i=0;i<N;i++)
    {
        printf("Digite valor inteiro: ");
        scanf("%i",&pv[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("%i\n",pv[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{
    int i;
    float *p;

    /* alocacao dinamica de vetor */
    p = (float *)malloc( sizeof(float) * N);

    for(i=0;i<N;i++)
    {
        printf("Digite valor real: ");
        scanf("%f",&p[i]);
    }

    for(i=0;i<N;i++)
    {
        printf("%f\n",p[i]);
    }

    /* liberando memoria */
    free(p);

    return 0;
}

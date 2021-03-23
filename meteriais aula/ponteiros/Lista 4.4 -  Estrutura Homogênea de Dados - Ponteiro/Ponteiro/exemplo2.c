#include <stdio.h>

int main()
{
    int *a = NULL, t, w;
    float *f = NULL, h;
    float vetor[3] = {1.1,2.2,3.3};
    char vet[3] = {'a','b','c'};
    t = 10;
    h = 12.0;
    a = &t;
    f = &h;
    *a = 15; /* t = 15; */
    w = *a; /* w = t; */

    w = *a + *f;
    w = *a * *f;

    printf("vetor: %p\n", vetor);
    printf("&vetor: %p\n", &vetor);
    printf("vetor[0]: %p\n", &vetor[0]);

    printf("%p\n",&vetor[0]);
    printf("%p\n",&vetor[1]);
    printf("%p\n",&vetor[2]);

    printf("%p\n",&vet[0]);
    printf("%p\n",&vet[1]);
    printf("%p\n",&vet[2]);


    return 0;
}

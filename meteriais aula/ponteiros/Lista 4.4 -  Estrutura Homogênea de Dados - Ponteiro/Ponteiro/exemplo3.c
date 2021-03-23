#include <stdio.h>

int main()
{
    int *a = NULL, t, w, i;
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
    a = a + 2; /* operacao valida (+ e -)*/
    a = a * 2; /* operacao invalida*/
    f = vetor;
    *f = 123.0; /* vetor[0] = 123;*/
    *(f+2) = 1234.0; /*vetor[2] = 1234.0*/
    h = *f * 2 + vetor[1] + *(f+1);
    /*h = 123.0 * 2 + 2.2 + 2.2*/


    return 0;
}

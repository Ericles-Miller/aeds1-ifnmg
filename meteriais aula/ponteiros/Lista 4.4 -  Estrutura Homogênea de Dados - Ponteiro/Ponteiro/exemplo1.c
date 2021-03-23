#include <stdio.h>

int main()
{
    int *a = NULL, t, w;
    float *f = NULL, h;
    t = 10;
    h = 12.0;
    a = &t;
    f = &h;
    *a = 15; /* t = 15; */
    w = *a; /* w = t; */
    printf("a: %p\n",a);
    printf("f: %p\n",f);
    printf("End. de a: %p\n",&a);
    printf("End. de f: %p\n",&f);
    printf("Digite valor inteiro: ");
    scanf("%i", a);
    printf("Valor de t: %i\n", t);

    return 0;
}

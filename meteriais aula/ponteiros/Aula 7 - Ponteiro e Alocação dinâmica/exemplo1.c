#include <stdio.h>

int main()
{
    int a = 10, b = 7;
    int * pa = NULL;

    pa = &a;
    *pa = *pa + 15;
    printf("a=%i\n",a);
    scanf("%i",pa); scanf("%i",&a);

    printf("a=%i\n",a);
    printf("pa=%p\n",pa);

    pa = &b;
    *pa = *pa * 2;
    printf("b=%i\n",b);
    printf("pa=%p\n",pa);
    return 0;
}

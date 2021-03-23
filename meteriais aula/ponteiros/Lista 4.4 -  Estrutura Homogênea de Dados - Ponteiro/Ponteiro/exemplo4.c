#include <stdio.h>

int main()
{
    char *p = NULL, lista[4] = {'a','b','c','d'};
    int i;
    p = lista;
    for(i=0; i<4; i++)
    {
        printf("%c ", *(p+i));
    }
    char str[20] = "aula";
    char str1[] = "aula";
    char *str2 = "aula";

    return 0;
}

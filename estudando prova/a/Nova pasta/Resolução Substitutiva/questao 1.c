#include <stdio.h>
#include <string.h>

void desembaralhar(char *linha)
{
    int i,j,t;
    char aux;
    t = strlen(linha);
    j = t / 2 -1;

    for(i=0;i!=j;i++)
    {
        aux = linha[i];
        linha[i] = linha[j];
        linha[j] = aux;
        j--;
    }

    j = t-1;
    for(i=t/2;i!=j;i++)
    {
        aux = linha[i];
        linha[i] = linha[j];
        linha[j] = aux;
        j--;
    }
}
int main()
{
    char str[256]={"I ENIL SIHTHSIREBBIG S"};
    desembaralhar(str);/*THIS LINE IS GIBBERISH*/
    printf("%s\n", str);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
5.	Fa�a uma fun��o recursiva chama inverta() que
receba como par�metro
um string. A fun��o deve imprimir a string de
forma inversa.
*/
void inverta( char *str)
{
    if( *str == '\0')
    {
        return;
    }
    else
    {
        inverta(str+1);
        printf("%c",*str);
    }
}

int main()
{
    char s[20]="Algoritmo";

    inverta(s);
    return 0;
}

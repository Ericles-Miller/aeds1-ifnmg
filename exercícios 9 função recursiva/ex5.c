#include<stdio.h>
#include<stdio.h>
/*Fa�a uma fun��o recursiva chama inverta() que receba como par�metro um
string. A fun��o deve imprimir a string de forma inversa.*/


void inverta (char *nome)
{
    if (*nome =='\0')
    {
        return ;
    }

    else
    {
         printf("c", *nome);
        inverta(nome+1) ;


    }
}
int main()
{
    char str[20]={"ericles"};

    inverta(str);


return 0;
}


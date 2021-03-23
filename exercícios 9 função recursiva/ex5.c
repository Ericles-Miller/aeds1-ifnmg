#include<stdio.h>
#include<stdio.h>
/*Faça uma função recursiva chama inverta() que receba como parâmetro um
string. A função deve imprimir a string de forma inversa.*/


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


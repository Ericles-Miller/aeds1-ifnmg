#include <stdio.h>

/*6.Crie um algoritmo que retira todas os caracteres repetidos de uma string.*/
int main()
{
  char nome[20];
    int i;

    printf("Digite o nome:\n");
    scanf("\n%s",nome);

    for (i=0; nome[i]!='\0'; i++)
    {
         nome[i]=' ';
    }

        printf("str %s",nome);


return 0;
}

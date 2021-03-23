#include <stdio.h>

/*4.Crie um algoritmo que recebe uma string e um caractere, e apague todas as ocorrências desses caracteres na string.*/
int main()
{
  char nome[20], c;
    int i,cont=0;

    printf("Digite o nome:\n");
    scanf("\n%s",nome);
    printf("digite caractere: \n");
    scanf(" %c", &c);

     for (i=0; nome[i]!='\0'; i++)
    {
        if (nome[i]== c)
        {
            nome[i]= ' ';
        }
    }

    printf("%s",nome);

return 0;
}

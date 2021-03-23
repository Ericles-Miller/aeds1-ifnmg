#include <stdio.h>

/*5.Crie um algoritmo que mostra os caracteres de uma string são repetidos.*/
int main()
{
  char nome[20], c,repetidos[20];
    int i,cont=0,j;

    printf("Digite o nome:\n");
    scanf("\n%s",nome);

     for (i=0; nome[i]!='\0'; i++)
      {
        for(j=0; nome[j]!='\0'; j++)
        {
        if (nome[i] == nome[i+1])
          {
            c= nome[i];
          }
        }
    }
    printf("Repetidos %s",c);

return 0;
}

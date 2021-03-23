#include<stdio.h>

/*2.Crie um algoritmo que transforma todos os caracteres de uma string em minúsculos.*/

int main()
{
  char nome[20];
    int i;

    printf("Digite o nome\n");
    scanf("%s", nome);

    for (i=0; nome[i]!='\0'; i++)
    {
        if (nome[i]>=72 && nome[i]<=97)
        {
            nome[i]= nome[i]+ 32;
        }
    }
     printf("%s\n",nome);
return 0;
}


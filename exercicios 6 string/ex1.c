#include<stdio.h>

/*1.	Crie um algoritmo que transforma todos os caracteres de uma string em maiúsculos.*/

int main()
{
  char nome[20];
    int i;

    printf("Digite o nome\n");
    scanf("%s", nome);

    for (i=0; nome[i]!='\0'; i++)
    {
        if (nome[i]>=97 && nome[i]<=122)
        {
            nome[i]= nome[i]- 32;
        }
    }
     printf("%s\n",nome);
return 0;
}

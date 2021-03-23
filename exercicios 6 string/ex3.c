#include<stdio.h>

/*3.Crie um algoritmo que recebe uma string e um caractere, e imprima o número de vezes que esse caractere aparece na string.*/

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
            cont+=1;
        }
    }

    printf("O número de vezes que a letra %c aparece no nome %s e: %i \n", c,nome, cont);

return 0;
}

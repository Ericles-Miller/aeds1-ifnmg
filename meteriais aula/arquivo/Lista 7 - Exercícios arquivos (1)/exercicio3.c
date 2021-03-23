#include <stdio.h>

/*
3.	Faça um algoritmo que receba do usuário o nome de um arquivo
texto e mostre na tela quantas letras são vogais.
*/

int main()
{
    int c = 0;
    FILE *pa;
    char ca, nome[30];
    printf("Digite nome do arquivo: ");
    scanf("%s",nome);

    if( (pa = fopen(nome, "r")) == NULL)
    {
        printf("ERROR - ARQUIVO\n");
        return 1;
    }

    while(!feof(pa))
    {
        ca = fgetc(pa);
        printf("%c", ca);
        if(ca == 'a' || ca == 'e' || ca == 'i' ||
           ca == 'o' || ca == 'u' ||  ca == 'A' ||
           ca == 'E' || ca == 'I' ||  ca == 'O' ||
           ca == 'U')
        {
            c++;
        }
    }
    printf("\nQuantidade: %i\n", c);


    return 0;
}

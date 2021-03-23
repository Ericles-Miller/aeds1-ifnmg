#include <stdio.h>
#include <string.h>

/*
4.	Fa�a um algoritmo que receba do usu�rio o nome de um arquivo texto.
Crie outro arquivo texto contendo o texto do arquivo informado pelo
usu�rio, mas com as vogais substitu�das por �-�. O nome do arquivo de
sa�da deve ser o mesmo que o arquivo de entrada com - no final.
Exemplo: exerc�cio -> exerc�cio-
*/

int main()
{
    char ca, nome[30], nome2[30];
    FILE *pa, *pa2;

    printf("Digite nome do arquivo: ");
    scanf("%s", nome);
    strcpy(nome2, nome);
    strcat(nome2,"-");

    if( (pa = fopen(nome, "r")) == NULL)
    {
        printf("ERROR - ARQUIVO\n");
        return 1;
    }

    if( (pa2 = fopen(nome2, "w")) == NULL)
    {
        printf("ERROR - ARQUIVO\n");
        return 1;
    }
    while(!feof(pa))
    {

        ca = fgetc(pa);
        if( ca == -1)
        {
            break;
        }

        if(ca == 'a' || ca == 'e' || ca == 'i' ||
           ca == 'o' || ca == 'u' ||  ca == 'A' ||
           ca == 'E' || ca == 'I' ||  ca == 'O' ||
           ca == 'U')
        {
         fputc('-',pa2);
        }
        else
        {
         fputc(ca,pa2);
        }
    }
    fclose(pa);
    fclose(pa2);
    return 0;
}

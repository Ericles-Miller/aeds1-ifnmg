#include <stdio.h>
#include <stdlib.h>
/*
-  int fclose (FILE *arq);

-  int feof(FILE *arq);  indica que um arquivo chegou ao seu final.

-  void rewind(FILE *arq); recoloca o indicador de posição de arquivo
                            no inicio do arquivo.

-  int fgetc (FILE *arq); A função lê o caracter como um unsigned
                           char mas retorna o valor como um inteiro.

- int fputc(int ch, FILE *arq); Para escrever caracteres.
*/
int main()
{
    int i = 1;
    FILE *pa;
    char c, nome_arquivo[20] = "arquivo2.txt";

    /* Abre o arquivo para leitura e escrita */
    if (( pa = fopen(nome_arquivo, "w+")) == NULL)
    {
        printf("\n\nNao foi possivel abrir o arquivo.\n");
        return 1;
    }

    /* Cada caracter digitado ser gravado no arquivo */
    printf("Digite caracteres: ");
    while( i++  <= 10)
    {
        scanf("\n%c",&c);
        fputc(c, pa);
    }

    rewind(pa);  /* volta ao inicio do arquivo */

    printf("\nVoltou para o inicio do arquivo, agora vou ler.\n");

    c = fgetc(pa);

    while (!feof(pa))
    {
        printf("%c", c);
        c = fgetc(pa);
    }
    fclose(pa);

    return 0;
}

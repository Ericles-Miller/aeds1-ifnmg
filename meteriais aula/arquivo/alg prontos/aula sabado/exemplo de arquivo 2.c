#include <stdio.h>
#include <stdlib.h>
/*
-  int fclose (FILE *arq);

-  int feof(FILE *arq);  indica que um arquivo chegou ao seu final.

-  void rewind(FILE *arq); recoloca o indicador de posição de arquivo
                            no inicio do arquivo.

- int fputs(char *str, FILE *parq); para escrever cadeia de caracteres

- int fgets(char *str, int comp, FILE *parq); para ler cadeia de caracteres
*/
#define MAX 80

int main ( )
{
    int i=0;
    char linha[MAX];
    FILE *pa;
    char nome_arquivo[20] = "arquivo3.txt";

    /* Abre o arquivo para leitura e escrita */
    if (( pa = fopen(nome_arquivo, "w+")) == NULL)
    {
       printf("\n\nNao foi possivel abrir o arquivo.\n");
       exit(1);
     }

     /* Cada linha digitada sera gravada no arquivo */
     while (++i <= 3)
     {
       printf("Digite string: ");
       scanf(" %[^\n]s", linha);
       strcat(linha, "\n");
       fputs(linha, pa);
     }

     rewind(pa);       /* volta ao inicio do arquivo */
     printf("\nVoltou para o inicio do arquivo, agora vou ler.\n");
     fgets(linha, MAX, pa);
     while (!feof(pa))
     {
      printf("%s",linha);
      fgets(linha, MAX, pa);
     }

     fclose(pa);

    return 0;
}
 
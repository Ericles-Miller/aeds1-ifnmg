#include <stdio.h>
#include <stdlib.h>
/*
-  int fclose (FILE *arq);

-  int feof(FILE *arq);  indica que um arquivo chegou ao seu final.

-  void rewind(FILE *arq); recoloca o indicador de posição de arquivo
                            no inicio do arquivo.

-  int fprintf(FILE *parq, const char *formatacao, ...);

-  int fscanf(FILE *parq, const char *formatacao, ...);
*/

#define MAX 20
int main ( )
{
 char palavra[MAX];
 int i;
 float f;
 FILE *arq;
 char *nome = "arquivo7.txt";

  /* Abre o arquivo para leitura e escrita */
  if (( arq = fopen(nome, "w+")) == NULL)
  {
     printf("\n\nNao foi possivel abrir o arquivo.\n");
        return 1;
  }

  printf("Entre com uma palavra: ");
  scanf ("%s", palavra);

  printf("Entre com um numero inteiro: ");
  scanf("%d", &i);

  printf("Entre com um numero flutuante: ");
  scanf("%f", &f);


  /* Escreve os dados no arquivo */
  fprintf(arq, "Nome: %s %d %f\n", palavra, i, f);
  i++;f++;
  fprintf(arq, "Nome: %s %d %f\n", palavra, i, f);
  i++;f++;
  fprintf(arq, "Nome: %s %d %f\n", palavra, i, f);

  rewind(arq);

  printf("\nVoltou para o inicio do arquivo, agora vou ler.\n");
  while( !feof(arq) )
  {
   fscanf(arq, "Nome: %s %d %f\n", palavra, &i, &f);
   printf("Palavra lida: %s\n", palavra);
   printf("Inteiro lido: %d\n", i);
   printf("Real lido: %.2f\n", f);
  }
  fclose(arq);

  system("pause");
  return 0;
}

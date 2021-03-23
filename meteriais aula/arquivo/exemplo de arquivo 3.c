#include <stdio.h>
#include <stdlib.h>
/*
-  int fclose (FILE *arq);

-  int feof(FILE *arq);  indica que um arquivo chegou ao seu final.

-  void rewind(FILE *arq); recoloca o indicador de posição de arquivo
                            no inicio do arquivo.

-  size_t fread (void *ptr, size_t size, size_t nmemb, FILE *parq);
   A função fread lê nmemb objetos, cada um com size bytes de comprimento
   do fluxo apontado por stream e os coloca na localização apontada por ptr

-  size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *parq);
    escreve nmemb elementos de dados, cada um com size bytes de comprimento,
    para o fluxo apontado por stream obtendo-os da localização apontada por ptr.
    fwrite retorna o número de itens que foram lidos com sucesso.
*/
#define MAX 80
int main (void )
{
  int inteiro=10, inteiro2;
  float real=2.5, real2;
  double real_duplo=2.12345678, real_duplo2;
  char caractere ='C', caractere2;
  FILE *pa;
  char nome_arquivo[20] = "arquivo4.aedsI";

  if (( pa = fopen(nome_arquivo, "w+b")) == NULL)
  {
    printf("\n\nNao foi possivel abrir o arquivo para escrita.\n");
    return 0;
  }
  fwrite(&inteiro, sizeof(int), 1, pa);
  fwrite(&real, sizeof(float), 1, pa);
  fwrite(&real_duplo, sizeof(double), 1, pa);
  fwrite(&caractere, sizeof(char), 1, pa);

  rewind(pa);

  fread(&inteiro2, sizeof(int), 1, pa);
  fread(&real2, sizeof(float), 1, pa);
  fread(&real_duplo2, sizeof(double), 1, pa);
  fread(&caractere2, sizeof(char), 1, pa);

  printf("%d, %f, %lf, %c\n", inteiro2, real2, real_duplo2, caractere2);

  fclose(pa);

  return 0;
}

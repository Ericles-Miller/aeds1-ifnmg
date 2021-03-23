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
  int inteiros[3]={10,11,12}, inteiros2[3];
  float reais[2]={2.5,1.9}, reais2[2];
  double real_duplo=2.12345678, real_duplo2;
  char caracteres[11] ="Algoritmos", caracteres2[11];
  FILE *pa;
  char nome_arquivo[20] = "arquivo5.txt";

  if (( pa = fopen(nome_arquivo, "w+b")) == NULL)
  {
    printf("\n\nNao foi possivel abrir o arquivo para escrita.\n");
    return 1;
  }
  fwrite(inteiros, sizeof(int), 3, pa);
  fwrite(reais, sizeof(float), 2, pa);
  fwrite(&real_duplo, sizeof(double), 1, pa);
  fwrite(caracteres, sizeof(char), 11, pa);

  rewind(pa);

  fread(inteiros2, sizeof(int), 3, pa);
  fread(reais2, sizeof(float), 2, pa);
  fread(&real_duplo2, sizeof(double), 1, pa);
  fread(caracteres2, sizeof(char), 11, pa);

  printf("Leitura do arquivo:\n");
  printf("%d, %d, %d\n", inteiros2[0],inteiros2[1],inteiros2[2]);
  printf("%f, %f\n", reais2[0], reais2[1]);
  printf("%lf, %s\n", real_duplo2, caracteres2);

  fclose(pa);

  return 0;
}

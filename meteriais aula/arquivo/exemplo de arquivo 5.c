#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
/*
-  int fclose (FILE *arq);

-  int feof(FILE *arq);  indica que um arquivo chegou ao seu final.

-  void rewind(FILE *arq); recoloca o indicador de posição de arquivo
                            no inicio do arquivo.

-  size_t fread (void *ptr, size_t size, size_t nmemb, FILE *parq);
   A função fread lê n objetos, cada um com size bytes de comprimento
   do fluxo apontado por stream e os coloca na localização apontada por ptr

-  size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *parq);
    escreve n elementos de dados, cada um com size bytes de comprimento,
    para o fluxo apontado por stream obtendo-os da localização apontada por ptr.
    fwrite retorna o número de itens que foram lidos com sucesso.
*/
#define MAX 2
typedef struct pessoa Pessoa;
struct pessoa
{
  char nome[40];
  int idade;
  float peso;
};

int main (void )
{
 FILE *pa;
 char nome_arquivo[40];
 int i;
 Pessoa turma[MAX];
 Pessoa turma2[MAX];

 for (i=0; i<MAX; i++)
 {
   printf("Nome :");
   scanf("\n%[^\n]s",turma[i].nome);
   printf("Idade :");
   scanf("%i",&turma[i].idade);
   printf("Peso :");
   scanf("%f",&turma[i].peso);
 }

  printf("\nGravando em arquivo\n");
  printf("Qual o nome do arquivo?");
  scanf("\n%[^\n]s", nome_arquivo);

  if ( ( pa = fopen(nome_arquivo, "w+b")) == NULL )
  {
     printf("Arquivo nao pode ser aberto: ");
     system("pause");
     return 0;
  }

  for (i= 0; i< MAX; i++)
  {
      fwrite( &turma[i], sizeof (Pessoa), 1, pa);
  }

  rewind(pa);

  for (i=0; i<MAX; i++)
  {
    fread( &turma2[i], sizeof (Pessoa), 1, pa);
  }

  printf("Imprimindo o vetor lido:\n");

  for (i=0; i<MAX; i++)
  {
   printf("Nome = %s\n", turma2[i].nome);
   printf("Idade  = %d\n", turma2[i].idade);
   printf("Peso  = %.2f\n\n", turma2[i].peso);
  }
  fclose(pa);

  system("pause");
  return 0;
}

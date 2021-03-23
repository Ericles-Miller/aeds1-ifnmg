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

- int fseek(FILE *fp, long numbytes, int origem); A função fseek() nos permite
  realizar operações de leitura e escrita em arquivos de forma randômica.

 Nome     Valor Significado
SEEK_SET	0	Início do arquivo
SEEK_CUR	1	Ponto corrente no arquivo
SEEK_END	2	Fim do arquivo

int remove (char *nome_do_arquivo); Apaga um arquivo especificado.
*/
#define MAX 4
typedef struct pessoa Pessoa;
struct pessoa
{
  char nome[40];
  int idade;
};

int main (void )
{
 FILE *pa;
 char nome_arquivo[40];
 int i;
 Pessoa turma[MAX];
 Pessoa p;

 for (i=0; i<MAX; i++)
 {
   printf("Nome :");
   scanf("\n%[^\n]s",turma[i].nome);
   printf("Idade :");
   scanf("%i",&turma[i].idade);
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
      if ( fwrite( &turma[i], sizeof (Pessoa), 1, pa) != 1)
      {
          printf("\nErro na escrita.\n");
          system("pause");
      }
  }
  /* Movemos o cursor para o início do arquivo*/
  rewind(pa);

  /* Foram cadastradas quatro pessoas - buscar a segunda pessoa
   Nome     Valor Significado
   SEEK_SET	0	Início do arquivo
   SEEK_CUR	1	Ponto corrente no arquivo
   SEEK_END	2	Fim do arquivo
  */
  fseek(pa, sizeof(Pessoa), SEEK_SET);
  fread( &p, sizeof (Pessoa), 1, pa);
  printf("Buscando a segunda pessoa: ");
  printf("\nNome = %s\n", p.nome);
  printf("Idade  = %d\n\n", p.idade);

  /* Foram cadastradas quatro pessoas - buscar a quarta pessoa */
  fseek(pa, sizeof(Pessoa), SEEK_CUR);
  fread( &p, sizeof (Pessoa), 1, pa);
  printf("Buscando a quarta pessoa: ");
  printf("\nNome = %s\n", p.nome);
  printf("Idade  = %d\n\n", p.idade);

  /* Foram cadastradas quatro pessoas - buscar a primeira pessoa */
  fseek(pa, sizeof(Pessoa)* -4, SEEK_END);
  fread( &p, sizeof (Pessoa), 1, pa);
  printf("Buscando a primeira pessoa: ");
  printf("\nNome = %s\n", p.nome);
  printf("Idade  = %d\n\n", p.idade);
  fclose(pa);

  remove(nome_arquivo);

  system("pause");
  return 0;
}

#include<stdio.h>
#define tam 5
#define aiai 5
#include<locale.h>

/*1.Fa�a um algoritmo que carregue um vetor com os nomes de sete alunos. Carregue outro vetor com a m�dia final desses alunos.
Calcule e mostre:
o O nome do aluno com maior m�dia (desconsiderar empates);
o Para cada aluno que ainda n�o est� aprovado, isto �, com m�dia menor que 7.0, mostrar quando esse aluno precisa tirar
 no exame para ser aprovado. Considerar que a m�dia para aprova��o no exame � 5.0.
*/

int main()
{setlocale(LC_ALL, "Portuguese");
int i,j,cont;
char nome[12];
float media[7], maior=0;

for (i=0; i<7; i++)
{
    printf("Digite o nome:");
    scanf("%s", nome[i]);
    printf("Media:\n");

}

for(i=0; i<7; i++)
{
    if (maior<media[i])
    {   cont = i;
        maior= media[i];
        nome[cont];
    }
}
printf("A maior nota foi do aluno : %s", nome[cont]);

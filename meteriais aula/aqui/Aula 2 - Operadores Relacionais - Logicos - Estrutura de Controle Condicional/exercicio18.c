#include <stdio.h>

/*
18.	Construa um algoritmo para ler quatro
valores referentes a quatro notas escolares
de um aluno e imprimir uma mensagem dizendo
que o aluno foi aprovado, se o valor da m�dia
escolar for maior ou igual a 7. Se o valor da
 m�dia for menor que 7, solicitar a nota da
 prova final, somar com o valor da m�dia e
 obter nova m�dia. Se a nova m�dia for maior
 ou igual a 5, apresentar uma mensagem dizendo
  que o aluno foi aprovado na prova final.
  Se o aluno n�o foi aprovado, indicar uma
  mensagem informando esta condi��o.
  Apresentar junto com as mensagens o valor
  da m�dia do aluno, para qualquer condi��o.
*/

int main()
{
    float n1,n2,n3,n4,media,provafinal,novamedia;
    printf("Digite quatro notas: ");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    media = (n1+n2+n3+n4)/4;

    printf("Media: %.2f\n",media);
    if( media >= 7.0)
    {
        printf("Aprovado!!!");
    }
    else
    {
        printf("Digite nota da prova final: ");
        scanf("%f", &provafinal);
        novamedia = (provafinal + media)/2;
        if(novamedia >= 5)
        {
            printf("Aprovado na prova final: %.2f\n",novamedia);
        }
        else
        {
            printf("Reprovado: %.2f\n",novamedia);
        }
    }
    return 0;
}







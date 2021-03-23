#include <stdio.h>

/*
18.	Construa um algoritmo para ler quatro
valores referentes a quatro notas escolares
de um aluno e imprimir uma mensagem dizendo
que o aluno foi aprovado, se o valor da média
escolar for maior ou igual a 7. Se o valor da
 média for menor que 7, solicitar a nota da
 prova final, somar com o valor da média e
 obter nova média. Se a nova média for maior
 ou igual a 5, apresentar uma mensagem dizendo
  que o aluno foi aprovado na prova final.
  Se o aluno não foi aprovado, indicar uma
  mensagem informando esta condição.
  Apresentar junto com as mensagens o valor
  da média do aluno, para qualquer condição.
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







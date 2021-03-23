#include <stdio.h>

/*O sistema de avaliação de determinada disciplina é composto por três provas. A primeira
prova tem peso 2, a segunda prova tem peso 3 e a terceira prova tem peso 5. Faça um
algoritmo para calcular a média (média ponderada) final de um aluno dessa disciplina.*/

int main()
{
 float prova_1, prova_2, prova_3, notafinal;

 printf("Digite a primeira nota:\n");
 scanf("%.2f",&prova_1);

 printf("Digite a segunda nota:\n");
 scanf("%.2f",&prova_2);

 printf("Digite a terceira nota:\n");
 scanf("%.2f",&prova_3);

 notafinal= prova_1*2 + prova_2*3 + prova_3*5 / 10;

 printf("A nota final do aluno foi: %.2f\n", notafinal);

return 0;
}

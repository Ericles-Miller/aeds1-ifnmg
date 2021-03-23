#include <stdio.h>

/*
11.	Uma empresa de transporte quer aumentar o salário de seus
funcionários em N% de reajuste. Crie um programa que solicite
  dois números. O primeiro número representará o salário do
  funcionário e o segundo número corresponde o percentual de
  reajuste. O algoritmo deve exibir o salário do funcionário
   após o aumento.
*/

int main()
{
    float salario, reajuste;
    printf("Digite salario e reajuste: ");
    scanf("%f %f", &salario,&reajuste);

    salario = salario + salario*reajuste/100;
    /*salario = salario * (1+reajuste/100);*/
    printf("Salario final: %.2f\n",salario);
    return 0;
}

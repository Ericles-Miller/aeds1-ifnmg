#include <stdio.h>

/*
11.	Uma empresa de transporte quer aumentar o sal�rio de seus
funcion�rios em N% de reajuste. Crie um programa que solicite
  dois n�meros. O primeiro n�mero representar� o sal�rio do
  funcion�rio e o segundo n�mero corresponde o percentual de
  reajuste. O algoritmo deve exibir o sal�rio do funcion�rio
   ap�s o aumento.
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

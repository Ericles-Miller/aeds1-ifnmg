#include <stdio.h>

/*
21.	Construa um algoritmo que leia
dois números reais e a operação
aritmética desejada (use um char
para armazenar a operação).
Calcule então a resposta adequada.
Sendo a operação ‘+’ uma soma, ‘*’
multiplicar os dois números, ‘/’
dividir o primeiro pelo segundo, ‘-‘
subtração do primeiro pelo segundo
(utilize o comando switch).
*/

int main()
{
    char op;
    float n1,n2,resultado;
    printf("Digite operacao: ");
    scanf("%c", &op);
    printf("Digite dois valores reais: ");
    scanf("%f%f", &n1,&n2);

    switch( op )
    {
    case '+':
        resultado = n1+n2;
        printf("Soma: %.2f\n",resultado);
        break;
    case '-':
        resultado = n1-n2;
        printf("Subtracao: %.2f\n",resultado);
        break;
    case '*':
        resultado = n1*n2;
        printf("Multiplicacao: %.2f\n",resultado);
        break;
    case '/':
            if(n2 != 0)
            {
              resultado = n1/n2;
              printf("Divisao: %.2f\n",resultado);
            }
            else
            {
                printf("nao existe divisao por zero\n");
            }
        break;
    default:
        printf("Operacao invalida\n");
    }
    return 0;
}



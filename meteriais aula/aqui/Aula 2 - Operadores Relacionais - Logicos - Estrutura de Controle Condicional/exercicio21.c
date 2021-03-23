#include <stdio.h>

/*
21.	Construa um algoritmo que leia
dois n�meros reais e a opera��o
aritm�tica desejada (use um char
para armazenar a opera��o).
Calcule ent�o a resposta adequada.
Sendo a opera��o �+� uma soma, �*�
multiplicar os dois n�meros, �/�
dividir o primeiro pelo segundo, �-�
subtra��o do primeiro pelo segundo
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



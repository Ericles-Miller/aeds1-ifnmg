#include <stdio.h>
/*
21.	Construa um algoritmo que leia dois números reais e a
operação aritmética desejada (use um char para armazenar a
                                 operação). Calcule então a
                                 resposta adequada. Sendo a
                                 operação ‘+’ uma soma, ‘*’
                                 multiplicar os dois números,
                                  ‘/’ dividir o primeiro pelo
                                  segundo, ‘-‘ subtração do
                                  primeiro pelo segundo.
*/
int main()
{
    float n1,n2,res;
    char op;
    printf("Digite dois valores reais: ");
    scanf("%f%f", &n1,&n2);
    printf("Digite operacao aritmetica: ");
    scanf("\n%c", &op);

    if( op == '+')
    {
        res = n1 + n2;
        printf("Soma: %.2f\n", res);
    }
    else
    if( op == '-')
    {
        res = n1 - n2;
        printf("Subtracao: %.2f\n", res);
    }
    else
    if( op == '*')
    {
        res = n1 * n2;
        printf("Produto: %.2f\n", res);
    }
    else
    if( op == '/')
    {
        if( n2 != 0)
        {
            res = n1 / n2;
            printf("Divisao: %.2f\n", res);
        }
        else
        {
           printf("divisao por zero eh indeterminada\n");
        }
    }
    else
    {
        printf("operacao invalida\n");
    }


    return 0;
}

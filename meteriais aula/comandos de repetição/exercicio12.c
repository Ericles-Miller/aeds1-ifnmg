#include <stdio.h>

/*
12.	Dado um inteiro positivo N, faça um
algoritmo que imprima todos os valores
menores que N da seguinte sequência:
•	8, 10, 16, 18, 32, 34,...
*/
int main()
{
    int s,N;
    printf("Digite valor inteiro: ");
    scanf("%i",&N);/*20*/

    for(s = 8; s < N; s=s*2)
    {
        printf("%i ",s);
        s = s + 2;
        if(s < N)
            printf("%i ",s);
        s = s - 2;
    }


    return 0;
}



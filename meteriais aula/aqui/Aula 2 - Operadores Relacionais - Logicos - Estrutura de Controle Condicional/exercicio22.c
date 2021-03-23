#include <stdio.h>

/*
22.	Construa um algoritmo que leia o salário e categoria de um
funcionário, se a categoria for = “m” de mensalista, conceder 10%
de aumento e exibir o valor reajustado, se for = “h” de horista,
conceder 20% de aumento e exibir o valor reajustado.
*/

int main()
{
    char categoria;
    float salario,novo_salario;

    printf("Digite salario: ");
    scanf("%f", &salario);
    /*getchar();*/
    /* fflush(stdin); */
    printf("Categoria: \nm para mensalista\nh para horista\n");
    printf("Digite categoria: ");
    scanf("\n%c",&categoria);
    /* scanf(" %c",&categoria); */
    /*scanf("\n%c",&categoria);*/

    if( categoria == 'm' || categoria  == 'M')
    {
        novo_salario = salario * 1.1;
        printf("Novo salario: %.2f\n", novo_salario);
    }
    else
    if( categoria == 'h'|| categoria  == 'H')
    {
        novo_salario = salario * 1.2;
        printf("Novo salario: %.2f\n", novo_salario);
    }
    else
    {
        printf("Categoria invalida\n");
    }


    return 0;
}

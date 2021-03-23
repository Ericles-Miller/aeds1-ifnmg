#include <stdio.h>

int main()
{
    float preco,aumento,imposto,novo_preco;
    int categoria;
    char situacao;

    printf("Digite preco - categoria - situacao: ");
    scanf("%f",&preco);
    scanf("%i",&categoria);
    scanf("\n%c",&situacao);
    if( preco <= 25)
    {
        switch(categoria)
        {
        case 1:
            aumento = preco * 0.05;
            break;
        case 2:
            aumento = preco * 0.08;
            break;
        case 3:
            aumento = preco * 0.10;
            break;
        }
    }
    else
    {
        switch(categoria)
        {
        case 1:
            aumento = preco * 0.12;
            break;
        case 2:
            aumento = preco * 0.15;
            break;
        case 3:
            aumento = preco * 0.18;
            break;
        }
    }
    printf("Aumento: R$ %.2f\n",aumento);
    if( categoria == 2 || situacao == 'R')
    {
        imposto = preco * 0.05;
    }
    else
    {
        imposto = preco * 0.08;
    }
    printf("Imposto: R$ %.2f\n",imposto);
    novo_preco = preco + aumento - imposto;
    printf("Novo preco: R$ %.2f\n",novo_preco);
    if( novo_preco <= 50.00)
    {
        printf("Barato\n");
    }
    else
    if( novo_preco > 50.00 && novo_preco < 120.00)
    {
        printf("Normal\n");
    }
    else
    {
        printf("Caro\n");
    }

    return 0;
}

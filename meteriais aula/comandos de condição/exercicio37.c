#include <stdio.h>

int main()
{
    int codigo_prod, codigo_pais;
    float peso,preco,imposto;
    printf("Digite codigo do pais e do produto: ");
    scanf("%i%i", &codigo_pais, &codigo_prod);
    printf("Digite peso do produto em Kg: ");
    scanf("%f", &peso);
    peso *= 1000;
    if( codigo_prod >= 1 && codigo_prod <= 4)
    {
        preco = 10 * peso;
    }
    else
    if(codigo_prod >=5 && codigo_prod <= 7)
    {
        preco = 25 * peso;
    }
    else
    {
        preco = 35 * peso;
    }
    printf("Preco total do produto: %.2f\n",preco);
    switch(codigo_pais)
    {
    case 1:
        imposto = 0;
        break;
    case 2:
        imposto = preco * 0.15;
        break;
    case 3:
        imposto = preco * 0.25;
    }
    printf("Imposto: %.2f\n", imposto);
    preco += imposto;
    printf("Valor final: %.2f\n", preco);

    return 0;
}

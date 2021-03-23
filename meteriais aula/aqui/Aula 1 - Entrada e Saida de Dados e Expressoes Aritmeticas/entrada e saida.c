#include <stdio.h>

int main()
{
    int idade = 35, idadeGabriel = 20;
    char categoria = '@';
    float preco;
    preco = 1500.00;
    printf("%i\n",idade);
    printf("%c\n", categoria);
    printf("%.3f\n",preco);
    idade = 20;
    printf("%i\n",idade);
    printf("%c %i  %.1f\n",categoria,idade,preco);
    idade = idadeGabriel;
    printf("Caribe: %i\n",idade);


    return 0;
}

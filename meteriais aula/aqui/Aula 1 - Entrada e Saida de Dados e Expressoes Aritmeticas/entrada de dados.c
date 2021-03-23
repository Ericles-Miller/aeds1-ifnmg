#include <stdio.h>

int main()
{
    int n1,n2;
    char letra;
    float valor;
    printf("Digite letra: ");
    scanf("%c",&letra);
    printf("Digite dois numeros inteiros: ");
    scanf("%i %i",&n1,&n2);
    printf("Digite valor real: ");
    scanf("%f",&valor);

    printf("Letra: %c Numeros: %i %i Valor: %.2f\n",
           letra,n1,n2,valor);

    return 0;
}

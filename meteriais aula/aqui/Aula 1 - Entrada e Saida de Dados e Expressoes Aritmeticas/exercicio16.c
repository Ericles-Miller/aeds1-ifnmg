#include <stdio.h>

/*
16.	Construa um algoritmo que calcule a quantidade de
dinheiro gasto por um fumante com cigarros durante n anos.
 Para isso, � necess�rio ler a quantidade de cigarros que
 o fumante fuma por dia, a quantidade de anos que ele
 fuma e o pre�o m�dio de uma carteira de cigarros.
 (OBS: Cada carteira de cigarros cont�m 20 cigarros.
 Cada ano t�m 365 dias.).
*/
int main()
{
    int dias,anos;
    float preco, gasto;
    printf("Digite qtd de cigarros por dia: ");
    scanf("%i", &dias);
    printf("Quantidade de anos: ");
    scanf("%i", &anos);
    printf("Digite o preco da carteira: ");
    scanf("%f", &preco);
    gasto = ((float)(dias*anos*365)/20)*preco;
    printf("Gasto: %.2f\n", gasto);
    return 0;
}





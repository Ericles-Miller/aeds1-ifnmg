#include<stdio.h>

/*12. Uma empresa de vendas oferece para seus clientes um desconto que é função do valor da
compra do cliente. Esse desconto é de 20% se o valor da comprar for maior ou igual a
$5000.00 e de 15% se for menor. O algoritmo deve imprimir o valor da compra e o
desconto obtido por um determinando cliente.*/

int main ()
{
    float preco, desconto;

    printf("Digite o valor do produto:\n");
    scanf("%2.f",&preco);

    if (preco>= 5000){
       desconto= preco *0.20/100;
       preco = preco - desconto;
       printf("O valor do produto: %2.f" , preco);
    }
    else
        desconto= preco *0.15/100;
        preco = preco - desconto;
    printf("O valor do produto: %2.f", preco);

return 0;
}

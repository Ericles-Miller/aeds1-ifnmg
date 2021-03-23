#include <stdio.h>
#include<locale.h>

/*Uma sorveteria vende três tipos de picolés. Sabendo-se que o picolé tipo 1 é vendido por
R$ 1.50, o do tipo 2 por R$ 2.00 e o do tipo 3 por R$ 0.75, faça um algoritmo que, para
cada tipo de picolé, mostre a quantidade vendida e o total arrecadado.*/

int main()
{
    float p1, p2,p3,p1A,p2A,p3A, ptotal;

    printf("digite a quantidade de picolés vendidos do tipo 1:\n");
    scanf("%.2f", &p1);
    fflush(stdout);


    printf("digite a quantidade de picolés vendidos do tipo 2:\n");
    scanf("%.2f", &p2);
    fflush(stdout);


    printf("digite a quantidade de picolés vendidos do tipo 3:\n");
    scanf("%.2f",&p3);
    fflush(stdout);

    p1A= p1* 1.50;
    fflush(stdout);

    p2A= p2* 2.00;
    fflush(stdout);

    p3A= p3* 0.75;
    fflush(stdout);

    printf("O preço arrecadado de picolés do tipo 1 foi: %.27f\n",p1);
    printf("O preço arrecadado de picolés do tipo 2 foi: %.27f\n",p2);
    printf("O preço arrecadado de picolés do tipo 3 foi: %.27f\n",p3);



    return 0;
}

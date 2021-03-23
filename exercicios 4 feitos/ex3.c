#include<stdio.h>
#define c 5
#include<locale.h>
/*3.Determinada empresa vende 40 artigos diferentes. A empresa identifica cada artigo por um código.
Escreva um algoritmo para imprimir o código e o preço dos três artigos mais caros.*/

 int main () {
setlocale(LC_ALL, "Portuguese");
int i,codigo[c];
float preco[c];

for (i=0; i<c; i++)
{
    printf("Digite o código do produto:\n");
    scanf("%i",&codigo[i]);

    printf("Digite o preço do produto:\n");
    scanf("\n");
    scanf("%f",&preco[i]);
    printf("\n");
    //cont= +1;
}
for (i=0; i<c; i++)
{
    printf("O codigo do produto e:%i e o preco é:%f\n", codigo[i], preco[i]);
}
 return 0 ;
 }

#include<stdio.h>
#include<locale.h>
/*5.Construa um algoritmo que leia um vetor A[10]. No final, mostre todas as posi��es do vetor que
armazenam um valor menor ou igual a 10 e o valor armazenado na posi��o.*/

int main() {
setlocale(LC_ALL, "Portuguese");
int a[10], i,posicao=-1;

for (i=0; i<10; i++)
{
    printf("Digite um numero:\n");
    scanf("%i",&a[i]);
}
for (i=0; i<10; i++)
{
    posicao= posicao +1;
    if (a[i]<=10)
    {
        printf("o valor �:%i na posi��o %i\n", a[i],posicao);
    }
}
return 0 ;
}



#include<stdio.h>
#include<locale.h>
/*6.Construa um algoritmo que leia um vetor X[10]. Substitua, a seguir, todos os valores
 nulos do vetor X por 1 e escreva novamente o vetor X.*/

int main() {
setlocale(LC_ALL, "Portuguese");
int x[10],i;

for ( i=0; i<10; i++)
{
    printf("Digite um número:\n");
    scanf("%i",&x[i]);
}
for ( i=0; i<10; i++)
{
    if (x[i]==0)
    {
        x[i]= 1;
    }
}
for ( i=0; i<10; i++)
{
    printf("Os valores dos vetor são:%i \n", x[i]);
}
return 0;
}

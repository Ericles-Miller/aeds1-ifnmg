#include<stdio.h>
#include<locale.h>
#define tam 6
/*11.Construa um algoritmo que leia um vetor D[60].
 A seguir, troque o 1o elemento com o 31º , o 2o com o 32º , etc. Mostre no final o vetor modificado*/

int main() {
setlocale(LC_ALL, "Portuguese");
int d[tam],i,j,d2[tam];

for (i=0; i<=tam; i++)
{
    printf("Digite número:\n");
    scanf("%i",&d[i]);
}

for (i=tam,j=0; i<=0, j<=tam; i--,j++)
{
    d2[j]= d[i];
}

for(j=0; j<=tam; j++)
{
    printf("Vetor:\n %i",d2[j]);
}
return 0;
}

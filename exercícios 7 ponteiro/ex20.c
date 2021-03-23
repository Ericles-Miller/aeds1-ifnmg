#include<stdio.h>
#include<locale.h>
#define tam 4
/*20.Construa um algoritmo que leia 2 vetores A[10] e B[10]. A seguir, Crie um vetor C que seja a intersecção de A com B e
mostre este vetor C. Obs.:
Intersecção é quando um valor estiver nos dois vetores. Considere que não há elementos duplicados em cada um dos vetores.*/

int main() {
setlocale(LC_ALL, "Portuguese");
int k[tam],k2[tam],i,j,posit,aux,cont=0,v3[cont];

for (i=0; i<=tam; i++)
{
    printf("Digite número v1:\n");
    scanf("%i",&k[i]);
    printf("Digite número v2:\n");
    scanf("%i",&k2[i]);
}

for (i=0; i<=tam; i++)
{
    aux= k[i];
    for(j=0; j<=tam; j++)
    {
        if (aux==k2[j])
        {
             v3[j]=k2[j];
        }
    }
}
for (i=0; i<=tam; i++)
{
    printf("A intersecção é: %i\n",v3[i]);
}


return 0;
}


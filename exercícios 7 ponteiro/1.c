#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

int *v=NULL,i,n,soma=0;
printf("Digite tamanho do vetor");
scanf("%i",&n);

v=(int*)malloc(sizeof(int)*n);

for(i=0;i<n;i++)
{
    printf("\nDigite valor: ");
    scanf("%i",v+i);
}
for(i=0;i<n;i++)
{
    if(v[i]%2!=0)
    {
        soma+= v[i];
    }
}
for(i=0;i<n;i++)
{
    printf("\nVetor: %i ",*(v+i));
}

        printf("\nSoma: %i ",soma);


return 0;
}

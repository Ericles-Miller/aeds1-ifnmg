#include<stdio.h>
#include<locale.h>
#define tam 6
/*10.Construa um algoritmo que leia um vetor K[30]. Troque a seguir, todos os elementos de ordem ímpar do
vetor com os elementos de ordem par imediatamente posteriores. Mostre o vetor modificado.*/

int main() {
setlocale(LC_ALL, "Portuguese");
int k[tam],i,j,posit,aux;

for (i=0; i<=tam; i++)
{
    printf("Digite número:\n");
    scanf("%i",&k[i]);
}

for(i=0; i<=tam; i++)
{
       aux= k[i];
        if (aux%2!=0)
    {

             k[i]= k[i+1];
             k[i+1]=aux;
         }
    }




for (i=0; i<=tam; i++)
{
    printf("\nO vetor é:\n %i", k[i]);
}
return 0;

}

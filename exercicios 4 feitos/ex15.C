#include<stdio.h>
#define tam 6
#include<locale.h>

/*15.	Construa um algoritmo que leia um vetor K[10] e um vetor N[10].
A seguir, crie um vetor M que seja a diferença entre o vetor K e N (M=K-N). Mostre a seguir o vetor M.*/

int main()
{
setlocale(LC_ALL, "Portuguese");

   int v1[tam], v2[tam],i,v3[tam];

   for (i=0; i<=tam; i++)
    {
        printf("Digite um número:\n");
        scanf("%i",&v1[i]);
        printf("Digite um número:\n");
        scanf("%i",&v2[i]);
    }

    for (i=0; i<=tam; i++)
     {
       v3[i] = v1[i]-v2[i];
     }

     for(i=0; i<=tam; i++)
     {
         printf("A diferença de: \n %i - %i = %i\n",v1[i],v2[i],v3[i]);
     }

    return 0;

}

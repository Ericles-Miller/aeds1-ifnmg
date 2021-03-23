#include<stdio.h>
#define tam 6
#include<locale.h>

/*14.Construa um algoritmo que leia dois vetores: F[20] e G[20]. Calcule e mostre, a seguir, o produto dos valores de F por G.*/

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
       v3[i] = v1[i]*v2[i];
     }

     for(i=0; i<=tam; i++)
     {
         printf("O produto é: \n %i\n", v3[i]);
     }

    return 0;

}

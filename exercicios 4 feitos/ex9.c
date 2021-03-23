#include<stdio.h>
#include<locale.h>
#define tam 6
/*9.Construa um algoritmo que leia um vetor N[20]. Troque a seguir,
 o 1º elemento com o último, o 2º elemento com o penúltimo, etc., até
trocar o 10º com o 11º. Mostre o vetor modificado*/

int main() {
setlocale(LC_ALL, "Portuguese");
int n[tam],i,j,n2[tam];

for ( i=0; i<tam; i++)
{
    printf("Digite um número:\n");
    scanf("%i",&n[i]);

}
printf("\n");
for (i=0; i<tam; i++)
{
    printf("O vetor sem inverter é: %i \n", n[i]);
    printf("\n");
}
printf("-------------------------------------------------------\n");
for (i=tam, j=0; i<=0,j<=tam; i--,j++)
{
    n2[j]=n[i];
}
for (j=0; j<tam; j++)
{
    printf("O vetor invertido é: %i\n", n2[j]);
    printf("\n");
}
return 0;
}

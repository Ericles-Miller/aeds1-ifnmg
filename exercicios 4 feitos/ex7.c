#include<stdio.h>
#include<locale.h>
/*7.Construa um algoritmo que leia um vetor C[50]. Encontre a seguir o maior elemento de C e mostre-o.*/

int main() {
setlocale(LC_ALL, "Portuguese");
int c[5],i, maior = 0;

for ( i=0; i<5; i++)
{
    printf("Digite um número:\n");
    scanf("%i",&c[i]);
}
maior= c[0];
for (i=0; i<5; i++)
{
    if (c[i]>= maior)
    {
        maior= c[i];
    }
}
printf("O valor maior é: %i", maior);

return 0;
}

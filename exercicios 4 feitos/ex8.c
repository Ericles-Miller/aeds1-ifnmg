#include<stdio.h>
#include<locale.h>
#define tam 5
/*8.Construa um algoritmo que leia um vetor N[20]. A seguir, encontre o menor elemento do vetor N e a sua posição dentro do
 vetor, mostrando: “O menor elemento de N é”, M, “e sua posição dentro do vetor é:”,P.*/

int main() {
setlocale(LC_ALL, "Portuguese");
int c[tam],i, menor = 0,posicao=-1,p_n_menor;

for ( i=0; i<tam; i++)
{
    printf("Digite um número:\n");
    scanf("%i",&c[i]);
}
menor= c[0];
for (i=0; i<tam; i++)
{   posicao= posicao +1;
    if (c[i]<= menor)
    {   p_n_menor=posicao;
        menor= c[i];
    }
}
printf("O valor menor é: %i na posição %i", menor, p_n_menor    );

return 0;
}


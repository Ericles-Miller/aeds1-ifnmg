#include<stdio.h>
#include <string.h>
#include<stdlib.h>
/*8.Uma string é considerada um palíndromo se quando lida da esquerda para a direita e da direita para a esquerda apresentam o
 mesmo valor. Por exemplo: ANA. Escreva um programa em C em que o usuário possa digitar várias palavras
 e informe se são palíndromos ou não. A cada palavra informada pergunte
 ao usuário se ele deseja continuar a execução do programa*/
int main()
{
    char nome[22],nomeinverso[22];
    int i=0,j,cont=0;
    printf("Nome:");
    scanf("%s",nome);
    j=0;
   for(i=strlen(nome)-1; i>=0; i--)
   {
       nomeinverso[j]=nome[i];
       j++;
   }
   nomeinverso[j]='0';

   if(strcmp(nome,nomeinverso)== 0)
   {
       printf("E um palindromo");
   }

   else printf("Nao é:");

return 0;
}

#include<stdio.h>

/*Faça um algoritmo que peça para o usuário digitar um valor inteiro entre1 e 5. Imprima o
número digitado por extenso (use a estrutura if-else- if). Por exemplo: usuário digitou o
número 3, imprima a palavra “tres”. O usuário digitou o número 5, imprima a palavra
“cinco”..*/
int main ()
{
int n1;
printf("escreva um valor de 1 a 5:\n");
scanf("%i", &n1);

    if (n1== 1){
    printf("UM!");
}
   if (n1== 2){
    printf("DOIS!");
}
    if (n1== 3){
    printf("TRÊS!");
}
    if (n1== 4){
    printf("QUATRO!");
}
    if (n1== 5){
    printf("UM!");
}
    return 0 ;
}

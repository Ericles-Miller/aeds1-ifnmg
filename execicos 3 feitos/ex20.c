#include<stdio.h>

/*Faça um algoritmo que receba vários números, calcule e mostre:
 A soma dos números digitados;
 A quantidade de números digitados;
 A média dos números digitados
 O maior número digitado;
 O menor número digitado;
 A média dos números pares;
 A percentagem dos números ímpares entre todos os números digitados.
Finaliza a entrada de dados com a digitação do número 300.*/

int main() {

int n1,maior=0,menor=0,qt=0,n,i,soma=0,qtpar=0;
float porcimpar=0,mediapar=0,media=0;
    printf("Digite quantos numeros desejar comparar: ");
    scanf("%i",&n);
    do
    {
     for (i=1; i<=n; i++)
      {
        printf("Digite um numero: ");
        scanf("%i",&n1);
        qt+= +1;
        soma = soma + n1;

     if (n1>maior)
       {
        maior= n1;
       }

     if (n1<menor)
        menor= n1;

     if(n%2==0)
      {
        qtpar+=1;
        mediapar+= n1;
        mediapar= mediapar*100/qtpar;
     }// media pares

     else
        porcimpar+= n1;
        porcimpar= porcimpar *100/qt;
      }
        media= (float)soma *100/qt;

        //exibiçao dos valores
        printf("A quantidade de numeros digitados: %i\n", qt);
        printf("A media e: %.2f\n", media);
        printf("A media dos numeros pares e: %.2f\n", media);
        printf("A soma e: %i\n", soma);
        printf("A porcentaggem dos numeros impares e: %.2f\n", porcimpar);

} while(n1!=300);


return 0;
}

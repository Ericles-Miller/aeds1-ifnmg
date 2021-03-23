#include<stdio.h>
#include<stdlib.h>
/*
17.	Faça uma função que receba, por parâmetro, dois valores X e Z, calcule e retorne Xz (sem utilizar
funções ou operadores de potência prontos).
.*/

int potencia(int x, int z)
{
   int i,mult;

   for (i=1; i<=z; i++)
   {
       mult=x*x;
   }

return mult;
}

int main()
{
    int x,z;

printf("Digite o valor de x e z:");
scanf("%i%i",&x,&z);
printf("O resultado foi de: %i", potencia(x,z));

return 0;
}

#include<stdio.h>
#include<stdlib.h>
/*
17.	Fa�a uma fun��o que receba, por par�metro, dois valores X e Z, calcule e retorne Xz (sem utilizar
fun��es ou operadores de pot�ncia prontos).
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

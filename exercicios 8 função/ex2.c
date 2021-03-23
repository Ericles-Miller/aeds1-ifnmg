#include<stdio.h>
#include<stdlib.h>
/*2	Faça uma função que retorne 1 se o número digitado for positivo ou 0 se o número for negativo.*/

int pos_neg (int a)
{
   if(a>0)
    {
        return 1;
    }
   else if (a<0)
   {
       return 0;
   }

}

int main()
{
   int c,x;

    printf("digite um valor:");
    scanf("%i",&c);

   x=pos_neg(c);
    printf("O valor foi %i", x);

return 0;
}


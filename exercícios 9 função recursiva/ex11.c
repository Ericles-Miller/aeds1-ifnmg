#include<stdio.h>
#include<stdlib.h>

/*11.Fa�a uma fun��o recursiva que permita inverter um n�mero inteiro N. Ex: 123 �
321.*/

int inverta(int n)
{
    if(n/10==0)
    {
        printf("%i",n);
    }
    else
    {
         printf("%i", n%10);
         inverta(n/10);
    }
}
int main()
{
    int n;

    printf("Numero:");
    scanf("%i",&n);
    inverta(n);
return 0;
}

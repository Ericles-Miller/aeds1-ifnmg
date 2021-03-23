#include <stdio.h>

int main()
{
int n,maior=0,menor=0,i,seq=0,soma=0;

do
{
    printf("numero\n");
    scanf("%i",&n);

    if (n > maior)
    {
        maior= n;
    }
    else if (n>0 && n<maior)
    {
        menor= n;
    }

}while(n>0);

 for (i=menor; i<=maior; i++)
    {
        seq= i;
        soma=soma +i;
        printf("seq %i\n", seq );

    }

printf("soma %i\n", soma);
return 0;
}

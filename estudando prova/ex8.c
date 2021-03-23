#include <stdio.h>

int main()
{
int i,n,soma_pos=0,soma_neg=0;

for (i=1; i<=10; i++)
{
    printf("Digite:\n");
    scanf("%i",&n);
    if (n>0)
    {
        soma_pos=soma_pos+n;
    }
    else
        soma_neg=soma_neg+n;
}

/*for (i=1; i<=10; i++)
{

}*/
printf("Soma positivo: %i\n", soma_pos);
printf("Soma negativo: %i\n", soma_neg);

return 0;
}

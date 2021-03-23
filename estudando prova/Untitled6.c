#include <stdio.h>

int main()
{
int n,n_div=0;

    printf("Numero:");
    scanf("%i",&n);
    while(n>2)
    {
       n= n/2;
        n_div+=1;
    }
printf("O n° de div. e %i",n_div);
return 0;
}

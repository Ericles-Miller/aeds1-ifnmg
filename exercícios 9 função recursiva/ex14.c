#include<stdio.h>
void pares(int n)
{
    if(n<=0)
    {
       printf("0");
    }
    else
    {
        if (n %2==0)
            {
                printf("%i\n",n);

                pares(n-2);
            }

    }
}

int main()
{
    pares(10);

    return 0;

}

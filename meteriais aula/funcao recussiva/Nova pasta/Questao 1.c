#include<stdio.h>
int multiplicacao(int n1,int n2)
{
    if(n2 == 0)
    {
        return 0;
    }
    else
    {
        return n1+ multiplicacao(n1,n2-1);
    }
}

int main ()
{
    printf("Multiplicacao: %i\n",multiplicacao(3,4));
    return 0;
}

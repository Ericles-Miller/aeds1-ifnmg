#include<stdio.h>
#include<stdlib.h>

int fatd (int n)
{
    if (n==1)
    {
        return 1;
    }
    if(n%2!=0)
    {
        return n*fatd(n-2);
    }
}

int main()
{
    printf("Fatorial duplo:%i",fatd(5));///passei o valor para o paramentro
    return 0;
}










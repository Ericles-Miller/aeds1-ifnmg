#include<stdio.h>
#include<stdlib.h>

int serie (int n)
{
    if (n==1)
    {
        return 2;
    }
    else
    {
        return (1+n*n)/(float)n + serie(n-1);
    }

int main()
{
    printf("soma da equação: %i",serie(5));///passei o valor para o paramentro
    return 0;
}

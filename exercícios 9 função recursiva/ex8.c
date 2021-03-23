#include<stdio.h>
#include<stdlib.h>

int serie (int n)
{
    if (n==1|| n==2)
    {
        return 1;
    }
    else
    {
        return  serie(n-1)+ serie(n-2) ;
    }
}

int main()
{
    printf("soma da equação: %i",serie(6));///passei o valor para o paramentro
    return 0;
}


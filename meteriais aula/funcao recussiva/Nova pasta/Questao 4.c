#include<stdio.h>
int fat( int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n* fat(n-1);
    }
}
int main()
{
    printf("Fatorial: %i\n",fat(5));
  return 0;
}


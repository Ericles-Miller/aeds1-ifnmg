#include<stdio.h>
int a(int n)
{
    int v;
    if(n>0)
    {
        v=1;
    }
    else
    {
        v=0;
    }
    return v;
}

int main()
{
    int c,b;
    printf("Digite numero: ");
    scanf("%i",&c);
    b=a(c);
    printf("%i\n",b);
    return 0;
}

#include<stdio.h>
int soma(int a,int b)
{
    int i,s=0;
    if(a<=b)
    {
         for(i=a;i<=b;i++)
    {
        s = s+i;
    }
    }
    else
    {
       for(i=b;i<=a;i++)
    {
        s = s+i;
    }
    }

    return s;
}
int main()
{
    int a,b,nsoma;
    printf("Digite dois numeros psitivos:");
    scanf("%i%i",&a,&b);
    nsoma= soma(a,b);
    printf("Soma: %i\n",nsoma);
    return 0;
}

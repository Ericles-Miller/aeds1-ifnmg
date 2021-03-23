#include<stdio.h>
int eh_primo(int n)
{
    int i,p=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            p++;
        }
    }
    if(p==2)
        return 1;
    else
        return 0;
}
void gera_10_primos()
{
    int c=0,p=101;
    do
    {
       if(eh_primo(p)==1)
       {
           printf("%i\n",p);
           c++;
       }
       p++;
    }
    while(c<10);
}
int main()
{
    gera_10_primos();
    return ;
}

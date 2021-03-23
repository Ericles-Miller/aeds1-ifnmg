#include<stdio.h>
int  num(int n)
{
    int p1,p2,s1;
    p1=n/100;
    p2=n%100;
    s1=p1+p2;
    s1*=s1;
    if(s1==n)
    {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{

    printf("Resultado: %i\n",num(3025));
        printf("Resultado: %i\n",num(3026));


    return 0;
}

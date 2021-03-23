#include<stdio.h>
int fatorial(int n)
{
    int i,fat=1;
    for(i=n;i>=1;i--)
    {
        fat*=i;
    }
    return fat;
}
int main()
{
    printf("Fatorial:%i\n",fatorial(3));
        printf("Fatorial:%i\n",fatorial(4));


    return 0;
}

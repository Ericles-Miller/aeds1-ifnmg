#include<stdio.h>
int soma(int a,int b,int c)
{
    int s;
    s=a+b+c;
    return s;
}
int main()
{
    int n1,n2,n3,r;
    printf("Digite 3 numeros inteiros:");
    scanf("%i %i %i",&n1,&n2,&n3);
    r=soma(n1,n2,n3);
    printf("Soma: %i\n",r);
    return 0;
}

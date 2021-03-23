#include<stdio.h>
float media(int *v,int t)
{
    float m;
    int soma(int *b,int a)
{
    int s;
    if(a==0)
    {
        return *b;
    }
    else
    {
        s=*(b+a)+soma(b,(a-1));
        return s;
    }
}
    m=soma(v,t)/(float)(t-1);
    return m;
}
int main()
{
    int t;
    float a;
    printf("Digite tamanho do vetor:");
    scanf("%i",&t);
    int v[t],i;
     for(i=0;i<t;i++)
    {
        printf("Digite numero inteiro:");
        scanf("%i",&v[i]);
    }
    printf("Media: %.2f\n ",media(&v,t));
    return 0;
}

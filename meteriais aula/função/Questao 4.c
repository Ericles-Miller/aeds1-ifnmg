#include<stdio.h>
int soma(int a,int b,int c)
{
    int i,s=0;
    for(i=b;i<=c;i++)
    {
        if(i%a==0)
        {
            s=s+i;
        }
    }
    return s;
}
int main()
{
    int n1,n2,n3;
    printf("Digie tres numeros inteiros,maior que um: ");
    scanf("%i%i%i",&n1,&n2,&n3);
    printf("Resultado: %i\n",soma(n1,n2,n3));
    return 0;
}

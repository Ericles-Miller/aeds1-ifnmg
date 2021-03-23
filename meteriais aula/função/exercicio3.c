#include <stdio.h>

int soma(int a, int b, int c)
{
    int i, s=0;
    for(i=b;i<=c;i++)
    {
      if( i % a == 0)
        {
            s+=i;
        }
    }
    return s;
}



int main()
{
    int a,b,c;

    printf("Digite valor para a: ");
    scanf("%i",&a);
    printf("Digite valor para b: ");
    scanf("%i",&b);
    printf("Digite valor para c: ");
    scanf("%i",&c);

    printf("Resultado: %i\n",soma(a,b,c));

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int inver(int n)
{
    int soma;
    if (n%10==0)
    {
        return 0;
    }
    else
    {
       return  soma=n%10+inver(n/10);
    }

}

int main()
{
    int n;

    scanf("%i",&n);
    printf("%i",inver(n));
    return 0;
}

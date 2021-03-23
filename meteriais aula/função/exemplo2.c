#include <stdio.h>

int z = 10;
int n;
void printi(int a)
{
   printf("%i\n",a);
   printf("%i\n",z);
}

int main()
{
    int b = 10, z = 9;
    printi(b);
    b = 12;
    {
        int b = 11;
        printi(b);
        printi(z);
    }

    if( b == 10)
    {
        float media;
    }

    for(b = 1;b <=10; b++)
    {
        printf("lalalala");
        char letra;
        printf("lalalala");
    }


    return 0;
}
